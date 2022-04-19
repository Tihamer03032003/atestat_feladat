#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int v[n][n];
    double alatt_osszeg=0, alatt_darab=0,felett_osszeg=0, felett_darab, ellen=0;
    double m1, m2;
    for(int i=0; i< n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
            if(i>j && v[i][j]>0)
            {
                alatt_darab++;
                alatt_osszeg+=v[i][j];

            }
            if(i<j && v[i][j]>0)
            {
                felett_darab++;
                felett_osszeg+=v[i][j];

            }
        }
    }

    m1=felett_osszeg/felett_darab;
    m2=alatt_osszeg/alatt_darab;
    if(felett_darab==0)
    {
        cout<< -m2;
    }
    else
    {
        if(felett_darab==0)
        {
            cout<< m1;
        }
        else
        {
            cout<< m1-m2;
        }
    }
            return 0;
        }
