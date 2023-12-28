#include <cstring>
void toLower(char * str){
    for ( int  i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {   
            str[i]-='A'-'a';
        }
    }
    
}
char * circularShiftRight(char * str, int shift){
    
    int dim=0;
    for (int  i = 0; str[i]!='\0'; i++)
    {
        dim++;
    }
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        int index=(dim-1-i)%dim;
    
        temp[i]=str[index];
        
    }

    return temp;
}

char * circularShiftRight(char * str, int shift){
    
    int dim=strlen(str);
    
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        int index=(dim-1-i)%dim;
    
        temp[i]=str[index];
        
    }

    return temp;
}

char * circularShiftLeft(char * str, int shift){
    
    int dim=strlen(str);
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        int index=(i+shift+dim)%dim;
        temp[i]=str[index];
        
    }
    return temp;
}