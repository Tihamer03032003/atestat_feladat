#include <iostream>
#include <string>

using namespace std;

int main()
{ string szoveg1, szoveg2, szufix="";
cin>> szoveg1;
cin>> szoveg2;
   int i, j;
   i=szoveg1.size()-1;
   j=szoveg2.size()-1;
   while(szoveg1[i]==szoveg2[j]){
    if(szoveg1[i]==szoveg2[j]){
        szufix+=szoveg1[i];
        }
    i--;
    j--;
    }
   string rendes="";
   for(int i=szufix.size()-1; i>=0; i--){
    rendes+=szufix[i];
   }

   cout<< rendes;
    return 0;
}
