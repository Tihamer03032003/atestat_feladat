#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n][n];
    double szamlalo=0, osszeg=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
            if(i<j && v[i][j]>0)
            {
                szamlalo++;
                osszeg+=v[i][j];
            }
        }
    }
    if(szamlalo==0)
    {
        cout<<"NU EXISTA";
    }
    else
    {
        cout<< osszeg/szamlalo;
    }
    return 0;
}
