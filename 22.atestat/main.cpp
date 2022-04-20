#include <iostream>
#include <string>
using namespace std;

int main()
{ string szoveg;
int nagy=0,kicsi=0, maradek=0;
getline(cin, szoveg);
    for(int i=0; i<szoveg.size(); i++){
        if(szoveg[i]>='A' && szoveg[i]<='Z'){
          nagy++;
        }
    else {
        if( szoveg[i]>='a' && szoveg[i]<='z'){
            kicsi++;
        }
        else{
            maradek++;
        }
    }
    }
    cout<< nagy<<" " <<kicsi<< " "<< maradek;


    return 0;
}
