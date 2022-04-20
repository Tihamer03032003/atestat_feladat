#include <iostream>
#include <fstream>
using namespace std;
ifstream be("ATESTAT.IN");
int main()
{
    int szam, biztosito=0, igen=0;
    while(be>>szam)
    {
        int lementes=szam;
        while(lementes>0)
        {
            int szamjegy=lementes%10;
            if(szamjegy%2!=0)
            {
                igen=1;
            }
            lementes/=10;
        }
        if(igen==0){
            cout<< szam<<" ";
            biztosito=1;
        }
   igen=0;

    }
 if(biztosito==0){
    cout<< "NU EXISTA";
 }



    return 0;
}
