#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int elso=0, masodik=0;
    for(int i=0; i<=n; i++)
    {
        bool prim=true;
        for(int j=2; j<i/2+1; j++)
        {

            if(i%j==0)
            {
                prim=false;
                break;
            }
        }
        if(prim==true)
        {
            if(elso==0)
            {
                elso=i;
            }
            else
            {
                masodik=elso;
                elso=i;
            }
            if(elso-masodik==2)
            {
                if(elso==n){
                cout<< "("<<masodik<<","<<elso<<")";
                }else {
                cout<< "("<<masodik<<","<<elso<<"),";
            }
            }
        }
        prim=true;
    }


    return 0;
}
