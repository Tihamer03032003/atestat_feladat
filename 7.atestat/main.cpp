#include <iostream>

using namespace std;

int main()
{   int n;
cout<< "n=";
cin>>n;
double szam;
double tomb[1000];
for(int i=0;i<n; i++){
    cin>>szam;
    tomb[i]=szam;
}
int szamlalo=0;
double contor;
while(szamlalo<n){
    contor=tomb[szamlalo];
   int darab=0;
for(int j=0;j<n; j++){
    if(contor==tomb[j]){
        darab++;
    }
}
if(darab==1){
    cout<< contor<< " " ;
}
szamlalo++;
}

    return 0;
}
