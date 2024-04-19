#include<stdio.h>
int func1(int a)
{
    if (a <= 1)
            printf("%d=", a);
    else
    {
            func1(a/2);
            printf("%d=", a);
    }
}

int main(){
   int a;
   scanf("%d",&a);
   func1(a);
   return 0;

}