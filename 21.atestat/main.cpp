#include <iostream>
#include <string>

using namespace std;

int main()
{string szoveg;
getline(cin, szoveg);
int elso=0, masodik=0;
for(int i=0; i<szoveg.size(); i++){
     if(szoveg[i]=='a' || szoveg[i]=='e' ||szoveg[i]=='i' || szoveg[i]=='o' ||szoveg[i]=='u'){
        if(elso==0){
            elso=i;
        }
        if(elso!=0){
        masodik=i;
     }
}
}
cout<< elso<<" "<<  masodik;
for(int i=0; i<elso; i++){
    cout<< szoveg[i];
}
for(int i=elso+1; i<masodik ; i++){
    cout<< szoveg[i];
}
for(int i=masodik+1; i< szoveg.size(); i++){
    cout<< szoveg[i];
}
    return 0;
}
