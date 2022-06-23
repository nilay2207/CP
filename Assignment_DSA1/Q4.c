#include<stdio.h>



int DigitalRoot(int n){

    if(n<10)return n;

    n=n%10 + DigitalRoot(n/10);
    return DigitalRoot(n);
}

int main(){
    int n;
    printf("Enter the Number \n");
    scanf("%d",&n);

 printf("Digital Root= %d",DigitalRoot(n));
}