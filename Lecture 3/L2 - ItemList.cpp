#include<bits/stdc++.h>
#define lld long long int
using namespace std;
void start()
{
        #ifndef ONLINE_JUDGE

        freopen("C:\\Users\\Hp\\Desktop\\CP\\input.txt", "r", stdin);

        freopen("C:\\Users\\Hp\\Desktop\\CP\\output.txt", "w", stdout);
        #endif // ONLINE_JUDGE

}

int main()
{
        //start();

        int foodItem[3]={10,20,30};

        int error=1,i=1;

        while(error)
        {
                printf("Enter 1 For Pizza\nEnter 2 For Burger \nEnter 3 For Cold Drinks \n");
                int choice;
                scanf("%d", &choice);

                printf("Enter Quantity");
                int quantity;
                scanf("%d",&quantity);

                if(choice==1)
                {

                        foodItem[0] = foodItem[0]-quantity;
                        if(foodItem[0]<=0)
                        {
                            error=0;
                        }
                }
                else if(choice==2)
                {

                        foodItem[1] = foodItem[1]-quantity;
                        if(foodItem[1]<=0)
                        {
                            error=0;
                        }
                }
                else if(choice==3)
                {
                        foodItem[2] = foodItem[2]-quantity;
                        if(foodItem[2]<=0)
                        {
                            error=0;
                        }
                }
                else
                {
                        printf("Error Input");
                }

                printf("Remaining Inventory :");
                for(int i=0;i<3;i++)
                {
                    printf("%d ", foodItem[i]);
                }
                printf("\n");


        }
        printf("Closed For Today! Thank You ");
















//-----------String Array 2D--------------------
        // char a[10][20];

        // for(int i=0;i<2;i++)
        // {
        //         scanf("%s", a[i]);
        // }
        // for(int i=0;i<2;i++)
        // {
        //         printf("%s\n", a[i]);
        // }

}
