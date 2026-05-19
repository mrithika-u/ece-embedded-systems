#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define BUTTON_PIN GPIO_NUM_0

void app_main(void)
{
    gpio_reset_pin(BUTTON_PIN);
    gpio_set_direction(BUTTON_PIN, GPIO_MODE_INPUT);

    int last_state = gpio_get_level(BUTTON_PIN);

    while (1)
    {
        int current_state = gpio_get_level(BUTTON_PIN);

        if (current_state != last_state)
        {
            if (current_state == 0)
            {
                printf("BUTTON PRESSED\n");
            }
            else
            {
                printf("BUTTON RELEASED\n");
            }

            last_state = current_state;
        }

        vTaskDelay(pdMS_TO_TICKS(10));
    }
}