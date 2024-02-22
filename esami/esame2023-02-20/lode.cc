#include <iostream>
#include <cstdlib>
using namespace std;
// Inserire qui sotto le definizioni delle funzioni SnowFlake e KochCurve
void KochCurve(int  level, double line_length){
    if (level==0)
    {
        cout<< "F("<<line_length<<");";
    }else{
        int tempLevel=level;

        tempLevel/=3;
        if ((tempLevel%2)==0)
        {
            level--;
            cout<<"RL(60);";
            KochCurve(level-1,line_length);
        }else{
            level--;
            cout<<"RL(120);";
            KochCurve(level-1,line_length);
        }
        
    }
    
}
void SnowFlake(double line_length, int level){
    
    cout<< level<< endl;
    KochCurve(level,line_length);
}
// Inserire qui sopra le definizioni delle funzioni SnowFlake e KochCurve


int main(int argc, char **argv) {
  int level = 2;
  double line_length = 90.0;

  if (argc == 3) {
    level = strtol(argv[1], NULL, 10);
    line_length = strtod(argv[2], NULL);
  }

  std::cout << "Un fiocco di neve per ll="
           << line_length <<  " e level ="
           << level << " e': " << std::endl;
  SnowFlake(line_length, level);
  std::cout << std::endl;
}