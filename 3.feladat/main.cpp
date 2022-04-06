#include <iostream>

using namespace std;

int main()
{ int k,n,darab=0, szamlalo=0, szam;
cin>>n;
cin>>k;
for(int i=0; i<n; i++){
    cin>>szam;
    while(szam>0){
        szam/=10;
        szamlalo++;
    }
    if(szamlalo>k){
        darab++;
    }
    szamlalo=0;
}
   cout<< darab;
    return 0;
}
