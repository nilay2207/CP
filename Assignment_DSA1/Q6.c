#include<stdio.h>
#include <stdbool.h>

void PlayAgain(int c);


bool TeddyBears(int n){

    if(n<42){
        return false;
    }

    if (n==42){
        return true;

    }

    if((n%5==0)&&TeddyBears(n-42))return true;
    if((n%2==0)&&TeddyBears(n/2))return true;
    if(n%4==0 || n%3==0){
        
        return ((n%10)*(n%100)/10)!=0 && TeddyBears(n-((n%10)*(n%100)/10));

    }
    return false;
}


int main(){
    int n;
    int c;
    
    while(n!=0){
        printf("Enter the number of bears\n");
        scanf("%d",&n);
        if(TeddyBears(n)){
            printf("You have reached the goal");
            PlayAgain(c);
        } else {
            printf("You have not reached the goal");
            PlayAgain(c);
        }
     return 0;   
    }
    
}

void PlayAgain(int c){

    
    printf("\nPress 1 to play again or press any key to exit the game\n");
    scanf("%d",&c);
    if(c==1){
        main();
    } 

}
