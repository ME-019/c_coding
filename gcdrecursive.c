#include<stdio.h>
  int findgcd(int a,int b){
 if (b==0)
    return a;
    else
    return findgcd(b,a%b);
  }
  int main(){
    int a,b;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b: ");
    scanf("%d",&b);
   
    printf("%d",findgcd(a,b));
  }
