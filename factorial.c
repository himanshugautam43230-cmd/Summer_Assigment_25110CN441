#include<stdio.h>
int main(){
    int n,i;
    long long factorial = 1;

    printf("Enter a number:");
    scanf("%d",&n);

    if(n < 0){
        printf("factoril of negative number is not defined.\n");

    }else{
        for(i = 1; i <= n; i++){
            factorial*=1;
            printf("factorial of %d = %11d\n",n,factorial);

        }
    }
    return 0;
}