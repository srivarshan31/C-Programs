#include<stdio.h>
int main(){
 int x;
 printf("enter a number:");
 scanf("%d",&x);
 printf("\n orginal x=%d",x);
 x+=5;
 printf("\n after x+5 = %d",x);
 x-=3;
 printf("\n after x-3 = %d",x);
 return 0;
}

