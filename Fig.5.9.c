#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


void main(){

    char input[100],c;
    int i;
    
    char valid[]="VALID TOKEN!";
    char invalid[]="INVALID TOKEN!";
    
    printf("Please enter the symbol: ");
    gets(input);
    
    c=input[0];        
    i=1;
    
    if(isalpha(c))       
       if(i==strlen(input))
          printf("\n%s\n",invalid);
       else{
             c=input[i++];
             while(isalnum(c) && i<strlen(input))
                   c=input[i++];
             if(i==strlen(input))
               if(isalnum(c) || c=='.')
                  printf("\n%s\n",valid);
               else
                  printf("\n%s\n",invalid);
             else
                printf("\n%s\n",invalid);
       }

    
    else if(isdigit(c)){    
         while(i<strlen(input) && isdigit(input[i++]));        
         if(i==strlen(input))
            printf("\n%s\n",valid);
         else
            printf("\n%s\n",invalid);       
    }
    
    else if(c==';' || c==',' || c=='+' || c=='-' || c=='*' || c==')' || c=='(' ){         
         if(i==strlen(input))
            printf("\n%s\n",valid);
         else
            printf("\n%s\n",invalid);
    }
    
    else if(c==':'){    
         if(i==strlen(input))
            printf("\n%s\n",valid);
         
         else{
               c=input[i++];
               if(c=='=' && i==strlen(input))
                  printf("\n%s\n",valid);
               else
                  printf("\n%s\n",invalid);
         }
    }
    
    else         
       printf("\n%s\n",invalid);
} 
         
