// Scrivere un programma che, dati a linea di comando tre valori,
// due numeri e un operatore, ritorni a video il risultato
// dell’operazione matematica definita dall’operatore.
#include <iostream>
using namespace std;

int main(int nArg, char * arg[]){
    if (nArg!=4)
    {
        cout << "Erorre, numero Argomenti Errati"<< endl;
    }else{
        int num1=atoi(arg[1]);
        int num2=atoi(arg[3]);
        char operatore = arg[2][0];
        double ris=0;
        switch (operatore)
        {
        case '+':
            ris=num1+num2;
            cout << "il Risultato è -->" << ris << endl;
            break;
        case '-':
            ris=num1-num2;
            cout << "il Risultato è -->" << ris << endl;

            break;
        case  '/':
            if (num2==0)
            {
                cout << "Impossibile Dividere per 0 " << endl ;
            }else{
                ris=(double)num1/(double)num2;
                cout << "il Risultato è -->" << ris << endl;

            }

            break;
        case '*':
            ris=num1*num2;
             
                cout << "il Risultato è --> " << ris << endl;
            break;

        
        default:
        cout << "Errore Generico";
            break;
        }
    }  
    return 0;  
}