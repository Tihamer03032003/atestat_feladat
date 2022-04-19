#include <iostream>
#include <fstream>

using namespace std;
ifstream be("numere.in");
int main()
{ int szam,max=0;
while(be>>szam){
    int lementes=szam;
    int szamjegy, uj_szam=0;
    while(lementes>0){
        szamjegy=lementes%10;
        lementes/=10;
        uj_szam=uj_szam*10+szamjegy;
    }
    if(uj_szam==szam){
        if(szam>max){
            max=szam;
        }
    }
}
    cout << max << endl;
    return 0;
}
