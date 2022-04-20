#include <iostream>
#include <string>

using namespace std;

int main()
{   string szoveg;
getline(cin, szoveg);
szoveg+=" ";
for(int i=0; i<szoveg.size(); i++){
        if(i==0){
            szoveg[i]=szoveg[i]-32;
        }
    if(szoveg[i]==' '){
        szoveg[i-1]=szoveg[i-1]-32;
        szoveg[i+1]=szoveg[i+1]-32;
    }
}
cout<< szoveg;

    return 0;
}
