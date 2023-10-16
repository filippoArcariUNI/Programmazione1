int pow(int n,int exp){
    int power=1;
for (int i = 1; i <= exp; i++)
{
    power*=n;
}
return power;
}