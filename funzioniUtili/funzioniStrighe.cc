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
    temp[dim]='\0';

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

void strCopy(char * str, char * copy){
    
    for (int i = 0; str[i]!='\0'; i++)
    {
        copy[i]=str[i];
    }
}

bool strCompara(char * str1,char *str2){
    for (int  i = 0; str1[i]!='\0'; i++)
    {
        if (str1[i]!=str2[i])
        {
            return false;
        }
        
    }
    return true;
}

bool isPresente(char vocabolario[][100],char * str, int dim){
    for (int i = 0; i < dim; i++)
    {
        if (strCompara(vocabolario[i],str))
        {
            return true;
        }
        
    }
    return false;
}
