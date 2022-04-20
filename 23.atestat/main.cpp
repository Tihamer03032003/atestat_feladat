#include <iostream>
#include <string>

using namespace std;

int main()
{ string szoveg;
getline(cin, szoveg);
for(int i=szoveg.size()-1; i>=0 ; i--){
for( int j=i; j<=szoveg.size()-1; j++){
    cout<< szoveg[j];
}
 cout<< endl;
}

    return 0;
}
