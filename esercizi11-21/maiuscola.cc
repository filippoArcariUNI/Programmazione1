#include "estrai.h"
#include <iostream>
using namespace std;
char * helperMaiuscole(char * str,int i ,char * newStr,int j){
    if (str[i]=='\0')
    {
        newStr[j]='\0';
        return newStr;
    }else{
        if (str[i]<='Z' && str[i]>='A')
        {
            newStr[j]=str[i];
            return helperMaiuscole(str,i+1,newStr,j+1);
        }
        return helperMaiuscole(str,i+1,newStr,j);
    }
}
char * estrai_stringa(char * str){

    char * newstr=new char[81];
    return helperMaiuscole(str,0,newstr,0);
    
}
