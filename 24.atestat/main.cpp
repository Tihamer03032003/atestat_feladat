#include <iostream>
#include <string>

using namespace std;

int main()
{string szoveg;
getline(cin, szoveg);
  int utolso=szoveg.size()-1, elso=0;
    while(elso<=utolso){
        for(int i=elso; i<=utolso; i++){
            cout<< szoveg[i];
        }
        cout<< endl;
        elso++;
        utolso--;
    }


    return 0;
}
