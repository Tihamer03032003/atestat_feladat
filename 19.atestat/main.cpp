#include <iostream>
#include <string>

using namespace std;

int main()
{ string szoveg;
cin>>szoveg;
int valami=0;
/*for(int i=0; i<szoveg.size(); i++){
    for(int j=0; j<szoveg.size(); j++){
        if(i!=j){
            cout<<szoveg[j];
        }
    }
    cout<< endl;
}
*/
while(valami!=szoveg.size()){
    for(int i=0; i<szoveg.size(); i++){
        if(i!=valami){
            cout<< szoveg[i];
        }
    }
    cout<< endl;
    valami++;
}
    return 0;
}
