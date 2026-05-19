#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define BUTTON_PIN GPIO_NUM_0

static volatile int button_interrupt_flag = 0;

static void IRAM_ATTR button_isr_handler(void *arg)
{
    button_interrupt_flag = 1;
}

void app_main(void)
{
    gpio_config_t button_config = {
        .pin_bit_mask = (1ULL << BUTTON_PIN),
        .mode = GPIO_MODE_INPUT,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_NEGEDGE
    };

    gpio_config(&button_config);

    gpio_install_isr_service(0);

    gpio_isr_handler_add(BUTTON_PIN, button_isr_handler, NULL);

    while (1)
    {
        if (button_interrupt_flag)
        {
            printf("BUTTON INTERRUPT TRIGGERED\n");
            button_interrupt_flag = 0;
        }

        vTaskDelay(pdMS_TO_TICKS(10));
    }
}