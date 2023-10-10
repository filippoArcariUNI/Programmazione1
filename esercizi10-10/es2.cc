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

void convertiChar(char & c){
    int delta=('z'-'Z');
    c-=delta;
}


int main(){
    char c;
cout << "Insersci un Carattere" << endl;
cin >> c;

if (isMaiuscolo(c))
{
    convertiChar(c);
    cout << "Bene, la lettera maiuscola è :" << c << endl;
}else{
    cout <<"la lettera è gia maiuscola!!" << endl;

}

}
