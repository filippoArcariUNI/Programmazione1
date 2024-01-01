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
        int index=(i + (dim - shift))%dim;
        if (index < 0) {
            index += dim;
        }
        temp[i]=str[index];
        
    }
    return temp;
}

char * circularShiftLeft(char * str, int shift){
    
    int dim=strlen(str);
    char * temp=new char[dim];
    for (int  i = 0; i<dim; i++)
    {
        int index=(i+shift)%dim;
        temp[i]=str[index];
        
    }
    return temp;
}

int findIndex(char  **parole,char * buffer){
    int numParole=strlen(*parole);
    for (int i = 0; i < numParole; i++)
    {
        if(!strcmp(parole[i],buffer)){
            // cout <<  parole[i]<<" " << buffer;
            return i;
        }
    }
    
    return -1;
}

int grep(char * str,char * cercata){
    int count=0;
    int j=0;
        for (int i = 0; str[i]!='\0'; i++)
        {
            if (str[i]==cercata[j])
            {
                j++;
            }else{
                j=0;
            }

            if (cercata[j+1]=='\0')
            {
                count++;
                j=0;
            } 
        }
    return count;
}