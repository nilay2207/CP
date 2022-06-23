 #include<stdio.h>
 #include <string.h>
 
void stringcount(char *s,int consonants,int index)
{
	
 
	if(!s[index])
    {
    	        printf("count of consonants = %d",consonants);
        return;
    }
    else
    {
    	
        
            if(s[index]=='a'|| s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u'||s[index]=='A'||s[index]=='E'||s[index]=='I'||s[index]=='O' ||s[index]=='U')
            {
            
             consonants;
        } else {
            consonants++;
        }
        
         stringcount(s,consonants,index+1);
    }  
}
int main()
{
    char s[1000];  
  
    printf("Enter  the string: \n");
    gets(s);
    
 
    stringcount(s,0,0);
     
     
 
 }