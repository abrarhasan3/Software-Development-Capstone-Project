#include<stdio.h>
#include<conio.h>

void start()
{
        #ifndef ONLINE_JUDGE

        freopen("input.txt", "r", stdin);

        freopen("output.txt", "w", stdout);
        #endif // ONLINE_JUDGE

}





int main()
{
        //start();



        int a;
        scanf("%d", &a);


        switch (a)
        {
        case 100:

                printf("%d", 100);
                break;
        case 200:
                printf("%d", 200);
                break;
        case 300:
                printf("%d", 300);
                break;
        default:
            printf("Error Input");
        }


}
