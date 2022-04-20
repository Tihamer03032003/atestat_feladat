#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int hanyadik=1;
    int vegso_osszeg=0;
    int faktorialis=1;
    while(hanyadik<=n)
    {
        faktorialis*=hanyadik;
        if((hanyadik-1)%2==0)
        {
            vegso_osszeg+=faktorialis;
        }
        else
        {
            vegso_osszeg-=faktorialis;
        }
        hanyadik++;
    }
    cout<< vegso_osszeg;
    return 0;
}
