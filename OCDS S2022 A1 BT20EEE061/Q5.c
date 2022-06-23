//Name :- Pranav Mailarpawar
 //Roll No:- BT20EEE061


#include<stdio.h>
#include<math.h>

void pattern(int i,int n){
    if(i>n)
    
    return;

    int a=pow(2,i);
    printf("%d", a);
    printf(" ");
    pattern(i+1,n);
    printf("%d" ,a);
    printf(" ");
}



int main(){

    int n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);

    pattern(0,n);

}