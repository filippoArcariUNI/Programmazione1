#include <iostream>
using namespace std;

bool isMaiuscolo(char c){
    bool maiscolo=false;
    if ((c>='a')&&(c<='z'))
    {
        maiscolo=true;
    }
    return maiscolo;
}

char convertiChar(char c){
    char newC;
    int delta=('z'-'Z');
    newC= (char)c-delta; 
    return newC;
}

int main(){
    char c;
cout << "Insersci un Carattere" << endl;
cin >> c;

if (isMaiuscolo(c))
{
    cout << "Bene, la lettera maiuscola è :" << convertiChar(c)<< endl;
}else{
    cout <<"la lettera è gia maiuscola!!" << endl;

}

}