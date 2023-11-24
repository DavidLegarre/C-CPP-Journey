#include <stdio.h>

int main()
{
    int choice = -1;
    printf("Bank App\n");
    while (choice != 0)
    {
        printf("1) Create Account\n");
        printf("2) Check Amount\n");
        printf("3) Transfer Money\n");
        printf("0) Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Creating account\n");
            break;
        case 0:
            printf("Exiting...\n");
            return 0;
        }
    }
}