#include <iostream>

using namespace std;

int main()
{  int x,y,k;
cin>>x;
cin>>y;
cin>>k;
int darab=0, szamlalo=0;
int tomb[10000]={0};
for(int i=x; i<=y; i++){
        bool prim=true;
    for(int j=2; j<i/2+1; j++){
        if(i%j==0){
            prim=false;
            break;
        }

    }
    if(prim){
        tomb[szamlalo]=i;
        szamlalo++;
        darab++;
    }
    prim=true;
}

if(darab==k){
    for(int i=0; i<k; i++){
        cout<< tomb[i]<< " ";
    }}else{
    for(int i=0; i<darab; i++){
        cout<< tomb[i]<<" ";
    }
    cout<<endl<<"s-au gasit mai putine numere prime: "<< darab;
    }

    return 0;
}
