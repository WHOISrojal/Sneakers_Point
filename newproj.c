#include <stdio.h>
#include <string.h>
struct items
{
	char items[100];
}it[9];
int main()
{
    int totalCost;
    int i, j, choice, c = 1, a[9], cost[9],s;
    for (i = 0; i < 9; i++)
        a[i] = 0;

    char str[100];
    //char items[9][100];
    printf("\n\n\n\n\n\t\t\t\t***********************************************\n");
    printf("\t\t\t\t*\t Welcome to the Sneakers Point\t      *\n");
    printf("\t\t\t\t*\t       Paknajol,Kathmandu\t      *\n");
    printf("\t\t\t\t***********************************************\n");
    printf("\n\n\n\t\t\t\t\tPress any key to continue....");
    getch();
    system("cls");
    printf("Please Enter Your Name:");
    gets(str);
    printf("Please Enter your shoe size:");
    scanf("%d",&s);
    system("cls");
    printf("Hello %s,\nWelcome to our Sneaker's Point Online Shopping.\n", str);
    printf("Showing shoes according to your size '%d'.\n",s);
    do
    {
        if (c == 1)
        {
            printf("Please select your shoes type\n\n1 - Casual shoes\n2 - Slippers\n3 - Formal shoes\nOr enter any other number to exit\n");
            scanf("%d", &choice);
            system("cls");
            switch (choice)
            {
            case 1:
            {
                int CasualChoice;
                printf("\nPlease select any option\n\n1 - Converse AllStar  - Rs.2500\n2 - Vans\t      - Rs.4500\n3 - Alexander McQueen - Rs.3500\nAny other number to exit\n");
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
                    printf("You chose Converse AllStar. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 2500;
                    	strcpy(it[0].items,"Converse AllStar");
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Vans. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 4500;
                        strcpy(it[1].items,"Vans");
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Alexander McQueen. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 3500;
                         strcpy(it[2].items,"Alexander McQueen");
                        
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
                printf("Please select any option\n\n1 - Gucci \t- Rs.5000\n2 - Skechers    - Rs.3000\n3 - Crocs \t- Rs.7000\nOr enter any other number to exit\n");
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
                    printf("You chose Gucci. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 5000;
                        strcpy(it[3].items,"Gucci");
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Skechers. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 3000;
                        strcpy(it[4].items,"Skechers");
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose Crocs. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 7000;
                        strcpy(it[5].items,"Crocs");
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
                printf("Please select any option\n\n1 - Loafer  - Rs.7000\n2 - Blucher - Rs.4000\n3 - Derby   - Rs.2000\nOr enter any other number to exit\n");
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
                    printf("You chose to buy Loafer. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 7000;
                        strcpy(it[6].items,"Loafer");
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose to buy Blucher. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 4000;
                        strcpy(it[7].items,"Blucher");
                    }
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("You chose to buy Derby. Are you sure to buy?\nIf 'Yes' Enter 1 Or else any number\n");
                    scanf("%d", &num);
                    system("cls");
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 2000;
                        strcpy(it[8].items,"Derby");
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
                        printf("%d\t%s\t\t%d\t\t\t%d\n", i, it[i].items, a[i], (cost[i] * a[i]));
                    }
                }
                printf("Total Cost\t\t\t\t\t%d\n", totalCost);
            }
            printf("\nIf you wish to buy anything more\nEnter 1 to Add Item\nOr enter any other number to Exit\n");
            scanf("%d", &c);
            system("cls");
        }
    } while (c == 1);
    printf("Revised Items \n");
            printf("Id\tItems\t\t\tQuantyity\t\tCost\n");
            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t%d\n", i+1, it[i].items, a[i], (cost[i] * a[i]));
                }
            }
            printf("\nTotal Cost\t\t\t\t\t\t%d\n", totalCost);
            printf("Your Final Cost is Rs.%d\n", totalCost);
    printf("Thankyou! %s for Choosing Us and Visit us again.\n", str);
}
