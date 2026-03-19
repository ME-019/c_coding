#include <stdio.h>

int main() {
   int i,j,n;
   for(i=1; i<=5; i++){
       if(i%2==0){
           n=2;
       }
       else{
           n=1;
       }
       for(j=1;j<=i; j++){
           printf("%d ",n);
           n+=2;
       }
       printf("\n");
   }
    return 0;
}
