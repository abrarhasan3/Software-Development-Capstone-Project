#include<stdio.h>
#include<conio.h>


//struct test {
//char b;
//int a;
//
//char c;
//};



union cd {
char c;
int a;

char b;

};

int main()
{

//    test var1;
//
//    printf("%d", sizeof(var1));




         //UNION TEST 1
//         cd a;
//         a.c = 'a';
//
//         a.a = 10;
//
//
//         printf("%d\n",sizeof(a));
//------------------------------------------------------------------------------//


         //CODE 2 : CONFLICTING IF-ELSE LADDER

         int score = 12;

         if (score >= 90) {
                 printf("Grade A");
         }
         else if (score >= 45) {
                 printf("Grade B");
         }
         else if (score >= 30) {
                 printf("Grade C");
         }
         else {
                 printf("Grade D");
         }
//----------------------------------------------------------------------------//

}
