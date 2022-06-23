
//Name :- Pranav Mailarpawar
 //Roll No:- BT20EEE061




#include <stdio.h>
#include <string.h>

void InsertionSort(char list[100][100],int i,int n)
{
        
        int j = i;
        if(i==n){
            return;
        }
        while (j > 0 && strcmp(list[j - 1], list[j]) > 0)
        {
            char tmp[100];
            strncpy(tmp, list[j - 1], sizeof(tmp) - 1);
            tmp[sizeof(tmp) - 1] = '\0';

            strncpy(list[j - 1], list[j], sizeof(list[j - 1]) - 1);
            list[j - 1][sizeof(list[j - 1]) - 1] = '\0';

            strncpy(list[j], tmp, sizeof(list[j]));
            list[j][sizeof(list[j]) - 1] = '\0';

            --j;
        }
        InsertionSort(list,i+1,n);
    
}

int main()
{   

    int n;
    printf("Enter number of strings\n");
    scanf("%d",&n);
    
    char strings[100][100];

    
    printf("Enter %d strings.\n", n);
    for (int index = 0; index < n; index++)
    {
        printf("string no:- %d : ", (index)+1);
        scanf("%s", strings[index]);    
        
    }

    InsertionSort(strings,1,n);

    printf("\nStrings after sorting in Lexicographical order:\n");
    for (int index = 0; index < n; index++)
    {
        printf("%s\n", strings[index]);
    }
}

