#include<bits/stdc++.h>

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
        start();

        // int choice;

        // scanf("%d", &choice);

        // switch(choice){
        // case 1:
        //         printf("%s\n","One" );
        //         break;
        // case 2:
        //         printf("%s\n", "Two");
                
        // case 10:
        //         printf("%s\n","10" );
        //         break;
                
        // case 20:
        //         printf("%s\n", "20");
        // }

        int height = 6;

        for(int i=0;i<height;i++)
        {
                for(int j=height-i-1;j>0;j--)
                {
                        printf(" ");

                }
                for(int k =0;k<=i;k++)
                {
                        printf("*");
                }
                printf("\n");
                //break;
        }




}
