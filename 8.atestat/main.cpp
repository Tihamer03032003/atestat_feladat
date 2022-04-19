#include <iostream>
#include <fstream>
using namespace std;
ifstream be("numere.in");
int main()

{
    int n, szam;
    be>>n;
    int elso, utolso;
    while(be>>szam)
    {
        if(szam<10)
        {
cout<< szam<< " " ;
        }
        else
        {
            elso=szam%10;
            int mentes=szam, szamjegy=1;
            while(mentes>0)
            {
                mentes/=10;
                szamjegy*=10;
            }
            szamjegy/=10;
            utolso=szam/szamjegy;
            if(elso==utolso)
            {
cout<< szam<<  " ";
            }
            szamjegy=1;
        }
    }
    return 0;
}
