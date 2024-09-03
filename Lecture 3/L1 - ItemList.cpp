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
//-------------------L1-----------------------------//

        // int a[10];

        // for(int i=0;i<10;i++)
        // {
        //         a[i]=0;
        // }
        // for(int i=0;i<10;i++)
        // {
        //         printf("%d\n", a[i]);
        // }





        // // for(int i=0;i<4;i++)
        // // {
        // //         printf("%d\n",a[i]);
        // // }



        int foodItems[3] = {10,20,30};



        while(1)
        {
                printf("Please enter 1 for pizza\n2 for Burger\n3 For Cold Drinks\n");
                int choice;
                scanf("%d", &choice);


                printf("Enter Quantity : ");
                int quantity;
                scanf("%d", &quantity);

                if(choice==1)
                {


                        foodItems[0] = foodItems[0]-quantity;



                }
                else if(choice==2)
                {
                        foodItems[1] = foodItems[1]-quantity;


                }
                else if(choice==3)
                {

                        foodItems[2] = foodItems[2]-quantity;



                }
                else
                {
                        printf("Error Input");
                        break;
                }

                if(foodItems[0] ==0 && foodItems[1]==0 && foodItems[2] == 0)
                {
                    break;
                }

                printf("Remaining Inventry: ");

                for(int i=0;i<3;i++)
                {
                        printf("%d ", foodItems[i]);
                }
                printf("\n\n\n");
        }
         printf("WE ARE CLOSED!! ");







//------------------L2--------------------------------------//
        // int foodItem[3]={10,20,30};

        // int error=1,i=1;

        // while(error)
        // {
        //         printf("Enter 1 For Pizza\nEnter 2 For Burger \nEnter 3 For Cold Drinks");
        //         int choice;
        //         scanf("%d", choice);

        //         printf("Enter Quantity");
        //         int quantity;
        //         scanf("%d",quantity);

        //         if(choice==1)
        //         {

        //                 a[0] = a[0]-quantity;
        //         }
        //         else if(choice==2)
        //         {

        //                 a[1] = a[1]-quantity;
        //         }
        //         else if(choice==3)
        //         {
        //                 a[2] = a[2]-quantity;
        //         }
        //         else
        //         {
        //                 printf("Error Input");
        //         }

        // }

        // char itemList[3][12] ;

        // for(int i=0;i<3;i++)
        // {
        //         scanf("%s", itemList[i]);
        // }

        // for(int i=0;i<3;i++)
        // {
        //         printf("%s\n",itemList[i]);
        // }



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























