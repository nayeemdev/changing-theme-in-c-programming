//This Simple Project Developed by Nayeem.  fb/nayeem077

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("color 70");
    char option;
    int color;
    do
    {
        printf("\n\n\n\n     Background Color             Text Color \n\n");
        printf("  1.     Green                      White\n");
        printf("  2.     Blue                       White\n");
        printf("  3.     Blue                       Yellow\n");
        printf("  4.     Red                        White\n");
        printf("  5.     Green                      Black\n");
        printf("  6.     White                      Black\n");
        printf("  7.     Black                      White\n\n");
        printf("Choose a option and hit enter for change theme \n\n");
        scanf("%d", &color);

        switch(color)
        {
            case 1:
                system("color 27");
                break;
            case 2:
                system("color 17");
                break;
            case 3:
                system("color 16");
                break;
            case 4:
                system("color 47");
                break;
            case 5:
                system("color 20");
                break;
            case 6:
                system("color 70");
                break;
            case 7:
                system("color 07");
                break;
            default:
                printf("Select the correct option");
                break;
        }
        printf("Do you want to continue to changing theme y/n? \n");
        option = getche();
    } while(option=='y');
    getch();
}
