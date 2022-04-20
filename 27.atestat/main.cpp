#include <iostream>
#include <fstream>
using namespace std;
ifstream be("ATESTAT.IN");
ofstream ki("ATESTAT.OUT");

int main()
{
    int szam, i=0, tomb[1000]= {0}, min=INT_MAX;
    while(be>>szam)
    {
        tomb[i]=szam;
        i++;
        if(min>szam)
        {
            min=szam;
        }
    }
    int ellenorzo=0, oszto;
        for(int k=1; k<=min; k++)
        {
            for(int j=0; j<i; j++)
            {
                if(tomb[j]%k!=0)
                {
                    ellenorzo=1;
                }
            }
            if(ellenorzo==0)
            {
                oszto=k;
            }
            ellenorzo=0;
        }

    ki<< oszto;

    return 0;

}
