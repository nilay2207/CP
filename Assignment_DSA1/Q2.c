#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdbool.h>
 
void checkCapital(char *str1,int i)
    {
        
        if (i<strlen(str1))
        {
            if(isupper(str1[i]))

            {
                printf("The first Capital letter in the Enterred String is %c",str1[i]);
                return;
                
            }
            else
            {
                 checkCapital(str1,i+1);
            
            }
        }
        else 
        {
            printf("There in no capital letter in the entered string");
        }
    }


int main()
{
    char str1[100], singLet;
 
    printf(" Enter a string : \n");
    scanf("%s", str1);

    checkCapital(str1,0);    
        
        
}
        
    
    