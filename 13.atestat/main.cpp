#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int v[n][n];
    double osszeg=0, darab=0, ellen=0;
    for(int i=0; i< n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
            if(i>j && v[i][j]>0)
            {
                darab
                ++;
                osszeg+=v[i][j];
                ellen=1;
            }
        }
    }
    if(ellen=0)
    {
        cout<< "NU EXITSTA";
    }
    else
    {
        cout<<osszeg/darab;
    }
    return 0;
}
