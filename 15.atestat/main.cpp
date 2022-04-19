#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n][n], x=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j< n; j++)
        {
            x+=2;
            if(x%3==0)
            {
                x+=2;
            }
            v[i][j]=x;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j< n; j++)
        {
            cout<< v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
