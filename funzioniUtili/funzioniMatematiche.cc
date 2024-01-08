int pow(int n,int exp){
    int power=1;
for (int i = 1; i <= exp; i++)
{
    power*=n;
}
return power;
}

int powRec(int base, int exp)
{
    if (exp != 0)
        return (base*powRec(base, exp-1));
    else
        return 1;
}


int cript(char str[]){
    int temp36=0;
    int base = 36;
    int dim=0;
    while (str[dim]!='\0')
    {
        dim++;
    }

    for (int i = dim-1; i>=0; i--)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            temp36+= (str[i]-'0')*pow(base,(dim-1)-i);

        }else if (str[i]>='a' && str[i]<='z')
        {
            temp36+= ( str[i]-'a'+10 )*  pow(base,(dim-1)-i);
        }
    }
    return temp36;
}

void decript(int cripted){
    const int base=36;
    char strDecripted[10];
    int i=0;
    while (cripted!=0)
    {
        int first=0;
        first=cripted%base;
        if (first>=0 && first<=9)
        {
            strDecripted[i]=first;
        }else if (first>=10 && first<=36)
        {
            char c=first+'a'-10;
            strDecripted[i]=c;
        }
        cripted-=first;
        cripted/=base;
        i++;
    }
    
    for (int j=i-1; j>=0 ; j--)
    {
        cout << strDecripted[j];
    }
    cout<< " ";
}


int fromDecimaltoN(int n, int base){
    int temp=0;
    int potenza=1; 
    int t=n;
    while (n!=0)
    {
        temp+=(n%base)*potenza;
        n/=base;
        potenza *=10;
    }
    return temp;
}