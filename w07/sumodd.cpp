#include<stdio.h>


int sumodd1(int n){
    if(n==1)
        return 1;
    else
        return (n-1)+(2*n-1);
}

int sumodd2(int n){
if(n==1)
   return 1;
   else
    return sumodd2(n-2)+n;
}

int main(){
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    while(1){
    printf("sumodd1(%d)=%d\n",n,sumodd1(n));
    printf("sumodd2(%d)=%d\n",n,sumodd2(n));
    printf("Enter n = ");
    scanf("%d",&n);
    }
}

//n is odd
// sumodd1(n) = 1+3+5+...(2n-1)
// sumodd2(n) = 1+3+5+...n
