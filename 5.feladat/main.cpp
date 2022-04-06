#include <iostream>
#include <fstream>

using namespace std;
ifstream be("numere.in");
int main()
{int maximum;
    int v[1000]={0}, szam;
    while(be>>szam){
        v[szam]++;

        maximum=szam;
    }
    if(v[maximum]>=2){
        cout<<"DA";
    }
    else{cout<< "NU";
    }
    return 0;
}
