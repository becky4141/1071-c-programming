#include<stdio.h>

long fib(int n){
    if(n==0||n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

int main(){
    printf("fib(3)=%d\n",fib(3));
    printf("fib(10)=%d\n",fib(10));
    printf("fib(30)=%d\n",fib(30));

}
