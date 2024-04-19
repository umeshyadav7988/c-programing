#include <stdio.h>
#include <math.h>
int main()
{
    // int var=010;
    // printf("%d",var);

    // signed char chr;
    // chr=128;
    // printf("%d",chr);

    // float a=5,b=2;
    // int c=a%b;
    // printf("%d",c);

    // int i=3;
    // printf("%d %d %d",i,i++);

    //     int xyz=20;
    // {
    //     int xyz=40;
    // }
    // printf("%d",xyz);

    // int a=2,b=7,c=10;
    // c=a==b;
    // printf("%d",c);

    // int i=4,x;
    // x=++i + ++i + ++i;
    // printf("%d",x);

    // int main=80;
    // printf("%d",main);

    // int goto=5;
    // printf("%d",goto);

    int number;
    scanf("%d",&number);
    int num=0;
    int temp=number;
    while(temp>0){
        num++;
        temp=temp/10;
    }
    printf("%d\n",num);
    int ans=0;
    int i=0,j=0;
    while(i<num && number>0){
        if(i%2!=0){
            ans=pow(10,j)*(number%10)+ans;
            if(number%10==0){
                ans=pow(10,j)*1;
            }
            number=number/10;
            j++;
        }
        else{
            number=number/10;
        }
        i++;
        printf("%d",ans);
    }
    printf("\n");
    printf("%d",ans);

}