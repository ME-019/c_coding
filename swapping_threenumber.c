#include <stdio.h>

int main() {
    int a,b,c;
  printf("Enter anumber a");
  scanf("%d",&a);
  printf("enter number b");
  scanf("%d",&b);
  printf("enter number c");
  scanf("%d",&c);
a=a+b;
b=a-b;
a=a-b;
b=b+c;
c=b-c;
b=b-c;
  printf("aftre swapping %d %d %d",a,b,c);

    return 0;
}
