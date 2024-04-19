//chocolate wrapper question 
#include<stdio.h>
int main(){
    int l,b;
    scanf("%d %d",&l,&b);
    int area=l*b,min=area+1;
    int num=0,size=0;
    for(int i=1;i<area;i++){
        if(area%(i*i)==0){
            num=area/(i*i);
        }
        if(num<min){
            min=num;
            size=i;
        }
    }
    printf("size of %d \nmin of  %d ",size,min);
}