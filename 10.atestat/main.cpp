#include <iostream>

using namespace std;

int main()
{ int n;
cin>>n;
int v[n+1][n+1];
for(int i=1; i<=n; i++){
    for( int j=1; j<=n; j++){
        v[i][j]=(i*j)%10;
    }
}
for(int i=1; i<=n; i++){
    for( int j=1; j<=n; j++){
    cout<< v[i][j]<< " ";
    }
    cout<< endl;
}

    return 0;
}
