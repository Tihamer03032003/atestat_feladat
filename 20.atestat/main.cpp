#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szoveg;
    getline(cin, szoveg);
    for(int i=0; i< szoveg.size(); i++)
    {
        if(szoveg[i]!=' ')
        {
            if(szoveg[i]=='a' ||szoveg[i]=='e' ||szoveg[i]=='i' ||szoveg[i]=='o' ||szoveg[i]=='u')
            {
                szoveg[i]=szoveg[i]+1;
            }
        }
    }
    cout<< szoveg;
    return 0;
}
