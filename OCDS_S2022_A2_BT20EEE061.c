//Pranav Mailarpawar 
//BT20EEE061
//Sorting Strings using pointer and implementing Strcmp function using REcursion.

#include <stdio.h>
#include <stdlib.h>



void swap1(char *str1,char *str2){

    char *temp=str1;
    str1=str2;
    str2=temp;

}

int strCmp(char *str1,char *str2){
    if(*str1>*str2){
        return 1;
    }
    else if(*str1<*str2){
        return -1;
    }
    else if(*str1 !='\0' && *str2 !='\0') {
        strCmp(str1+1,str2+1);
    }
    else{
    return 0;
    }
}



void BubbleSort(char * str[100],int n,int i){
    if(i==n){
        return;
    }

for(int j=0;j<n-1-i;j++){
    if(strCmp(*(str+j),*(str+j+1)) == 1){
               char *temp = *(str+j);
               *(str+j) = *(str+j+1);
               *(str+j+1) = temp;
               
    }
}

    BubbleSort(str,n,i+1);

}

int main()
{  
    char *str[100];
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);

    printf("Enter %d strings.\n", n);
    for(int index=0;index<n;index++){
        str[index] = malloc(10*sizeof(char));
        printf("String no:- %d ",(index)+1);
        scanf("%s",str[index]);

    }

    BubbleSort(str,n,0);


    printf("Sorted Strings after applying Bubble Sort\n");
    for(int i=0;i<n;i++){
       printf("%s ",str[i]); 
    }
    
    return 0;
}

