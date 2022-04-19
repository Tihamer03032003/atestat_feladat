#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin>>n;
    cin>>x;
    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                v[i][j]=x/100;
            }
            else
            {
                if(i+j==n-1)
                {
                    v[i][j]=x%10;
                }
                else
                {
                    v[i][j]=(x/10)%10;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        { cout<< v[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}
