#include <iostream>

using namespace std;

int main()
{
   int n, a[1000], b[1000], Sa=0, Sb=0;
   cin>>n;
   for(int i=0; i<n; i++){
    cin>> a[i];
    if(a[i]%2==0){
        Sa+=a[i];
    }
   }
   for(int i=0; i<n; i++){
    cin>> b[i];
    if(b[i]%2==1 && b[i]<Sa){
        Sb+=b[i];
    }
   }
   cout<< Sb;
    return 0;
}
