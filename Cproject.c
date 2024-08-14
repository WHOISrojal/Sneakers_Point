#include <stdio.h>
#include <string.h>
int main()
{
    int totalCost;
    int i, j, choice, c = 1, a[9], cost[9];
    for (i = 0; i < 9; i++)
        a[i] = 0;

    char str[100];
    char items[9][100];
    printf("\n\n\n\n\n\t\t\t///***********************************************************///\n");
    printf("\t\t\t\t\t Welcome to the Sneakers Point\n");
    printf("\t\t\t\t\t     Paknajol,Kathmandu\n");
    printf("\t\t\t///***********************************************************///\n");
    printf("\n\n\n\t\t\t\t\tEnter any key to continue....");
    getch();
    system("cls");
    printf("Please Enter Your Name:");
    gets(str);
    system("cls");
    printf("Hello %s, Welcome to our Sneaker's Point Online Shopping.\n", str);
    do
    {
        if (c == 1)
        {
            printf("Please select any option\n1 - Casual shoes\n2 - Slippers\n3 - Formal shoes\nAny other number to exit\n");
            scanf("%d", &choice);
            system("cls");
            switch (choice)
            {
            case 1:
            {
                int CasualChoice;
                printf("Please select any option\n1 - Converse AllStar - Rs.2500\n2 - Vans - Rs.4500\n3 - Alexander McQueen - Rs.3500\nAny other number to exit\n");
                scanf("%d", &CasualChoice);
                system("cls");
                cost[0] = 2500;
                cost[1] = 4500;
                cost[2] = 3500;
                switch (CasualChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose Converse AllStar with Rs.2500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 2500;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Vans with Rs.4500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 4500;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Alexander McQueenwith Rs.3500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 3500;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Casual Shoes\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int SlippersChoice;
                printf("Please select any option\n1 - Gucci - Rs.5000\n2 - Skechers - Rs.3000\n3 - Crocs - Rs.7000\nAny other number to exit\n");
                scanf("%d", &SlippersChoice);
                system("cls");
                cost[3] = 5000;
                cost[4] = 3000;
                cost[5] = 7000;
                switch (SlippersChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose Gucci for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 5000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Skechers for Rs.3000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 3000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Crocs for Rs.7000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 7000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Slippers Shoes\n");
                    break;
                }
                }
                break;
            }
            case 3:
            {
                int FormalChoice;
                printf("Please select any option\n1 - Loafer - Rs.7000\n2 - Blucher - Rs.4000\n3 - Derby - Rs.2000\nAny other number to exit\n");
                scanf("%d", &FormalChoice);
                system("cls");
                cost[6] = 7000;
                cost[7] = 4000;
                cost[8] = 2000;
                switch (FormalChoice)
                {
                case 1:
                {
                    int num;
                    printf("You chose to buy Loafer for Rs.7000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 7000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose to buy Blucher for Rs.4000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 4000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose to buy Derby for Rs.2000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 2000;
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from FormalChoice\n");
                    break;
                }
                }
                break;
            }
            default:
            {
                printf("Enter Valid Categories Choice\n");
                break;
            }

                printf("%s's cart\n", str);
                printf("Id\tItems\t\tQuantity\tCost\n");
                for (i = 0; i < 9; i++)
                {
                    if (a[i] != 0)
                    {
                        printf("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                    }
                }
                printf("Total Cost\t\t\t\t\t%d\n", totalCost);
                printf("If you wish to buy anything more Enter\n1 to Add Item\nAny other number to Exit\n");
                scanf("%d", &c);
                system("cls");
            }
            printf("----------------------------------------------\n");
            printf("Revised Items \n");
            printf("Id\tItems\t\tQuantity\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            printf("\n\nIf you wish to buy anything more Enter\n1 to Add Item\nAny other number to Exit\n");
            scanf("%d", &c);
            system("cls");
        }
    } while (c == 1);
    printf("Your Final Cost is %d\n", totalCost);
    printf("Revised Items \n");
            printf("Id\tItems\t\tQuantity\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }
            printf("Total Cost\t\t\t\t\t%d\n", totalCost);
    printf("Thanks %s for Choosing Us and Visit us again.\n", str);
}