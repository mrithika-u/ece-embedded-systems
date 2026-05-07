#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int avatar;
    printf("=========================================\n");
    printf("             ENTER THE DUNGEON           \n");
    printf("=========================================\n");

    printf("You can choose one of the three avatars:\n");
    printf(" 0 = o.o  \n");
    printf(" 1 = $.$ \n");
    printf(" 2 = ^.^ \n");

    scanf("%d",&avatar);

    if(avatar == 0 | avatar == 1 | avatar == 2)
    {
    Sleep(500);
    system("cls");
    Sleep(500);
    if(avatar == 0)
    {
        printf("o.o");
        Sleep(500);
        system("cls");
        printf(" o.o");
        Sleep(500);
        system("cls");
        printf("  o.o");
        Sleep(500);
        system("cls");
        printf("   o.o");
        Sleep(500);
        system("cls");
        printf("    o.o");
        Sleep(500);
        system("cls");
        printf("     o.o");
        Sleep(500);
        system("cls");
        printf("      o.o");
        Sleep(500);
        system("cls");
        printf("       o.o");
        Sleep(500);
        system("cls");
        printf("        o.o");
        Sleep(500);
        system("cls");
        printf("         o.o");
        Sleep(500);
        system("cls");
        return 0;
    }
    else if(avatar == 1)
    {
        printf("$.$");
        Sleep(500);
        system("cls");
        printf(" $.$");
        Sleep(500);
        system("cls");
        printf("  $.$");
        Sleep(500);
        system("cls");
        printf("   $.$");
        Sleep(500);
        system("cls");
        printf("    $.$");
        Sleep(500);
        system("cls");
        printf("     $.$");
        Sleep(500);
        system("cls");
        printf("      $.$");
        Sleep(500);
        system("cls");
        printf("       $.$");
        Sleep(500);
        system("cls");
        printf("        $.$");
        Sleep(500);
        system("cls");
        printf("         $.$");
        Sleep(500);
        system("cls");
        return 0;
    }
    else if(avatar == 2)
    {
        printf("^.^");
        Sleep(500);
        system("cls");
        printf(" ^.^");
        Sleep(500);
        system("cls");
        printf("  ^.^");
        Sleep(500);
        system("cls");
        printf("   ^.^");
        Sleep(500);
        system("cls");
        printf("    ^.^");
        Sleep(500);
        system("cls");
        printf("     ^.^");
        Sleep(500);
        system("cls");
        printf("      ^.^");
        Sleep(500);
        system("cls");
        printf("       ^.^");
        Sleep(500);
        system("cls");
        printf("        ^.^");
        Sleep(500);
        system("cls");
        printf("         ^.^");
        Sleep(500);
        system("cls");
        return 0;
    }


    }
    else
    {
        printf("You have entered the wrong integer. Go back by pressing space.");
        return 0;
    }


}
/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello");

    system("cls");

    printf("World");

    return 0;
}
*/
