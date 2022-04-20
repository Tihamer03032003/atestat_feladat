#include <iostream>

using namespace std;

int main()
{ int n, szam, max=0;
int tomb[1000]={0};
cin>>n;
for(int i=0; i<n; i++){
    cin>>szam;
   tomb[szam]++;
if(max<szam){
    max=szam;
}
}
int forditottja=0, mentes, szamjegy_osszeg=0;
for(int i=0; i<=max; i++){
    if(tomb[i]!=0){
        mentes=i;
        while(mentes>0){
            szamjegy_osszeg+=mentes%10;
            forditottja=forditottja*10+mentes%10;
            mentes/=10;
        }
        if(forditottja%szamjegy_osszeg==0){
            cout<< i << " "<< forditottja<< " "<< szamjegy_osszeg<< endl;
        }
    }
    forditottja=0;
    szamjegy_osszeg=0;

}


    return 0;
}
