#include "cifrario.h"
#include <iostream>
void crypt(char * str,int n){
    
    int i=0;
     do
    {
        if (isalpha(str[i]))
        {
            
        str[i] += - 'a' + n ;
        str[i] %= ('z'-'a');
        str[i] +='a';
        
        }
        i++;
        
    } while (str[i]!='\0'); 

}
void deCrypt(char * str,int n){   
    int i=0; 
  
    do
    {
        if (isalpha(str[i]))
        {
        str[i] -= 'a' ;
        str[i] %= ('z'-'a');
        str[i] +='a'- n;
        
        }
        i++;

    } while (str[i]!='\0'); 

}