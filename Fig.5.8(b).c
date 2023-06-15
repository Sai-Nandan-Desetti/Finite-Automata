#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


void main(){

    char input[100],c;
    int i;

    printf("Please enter the symbol: ");
    gets(input);   

    c=input[0];
    i=1;
    if(isalpha(c)){
       while(i<strlen(input) && isalnum(c)){
             c=input[i++];
             while(c=='_')
                   if(i==strlen(input))
                      break;
                   else
                      c=input[i++];         
       }    
       if(c=='_')
          printf("TOKEN ERROR!\n");
       else
          printf("TOKEN CORRECT\n");
    }
    else   
       printf("TOKEN ERROR!\n");        
                                 
}
