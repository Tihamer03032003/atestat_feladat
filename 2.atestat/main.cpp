#include <iostream>
#include <fstream>

using namespace std;

 ifstream be("tablou.txt");

int main()
{ int szam, save=0,max=0, tomb[10000]={0};
while(be>>szam){
    tomb[szam]=1;
    if(max<szam){
        max=szam;
    }
    }

    for(int i=0; i<=max; i++){
    if(tomb[i]!=0){
    if(i<10){
        cout<< i<< " " ;
        save++;
    }else{
        int lementes=i;
        int szamjegy=i%10;
        lementes/=10;
        bool egyenlo=true;
    while(lementes>0){
        if(lementes%10!=szamjegy){
           egyenlo=false;
            break;
        }
        lementes/=10;
    }
    if(egyenlo){
            cout<<i<< " ";
    save++;
    }
    }
}
}
if(save==0){
    cout<< "NU EXISTA";
}
    return 0;
}
