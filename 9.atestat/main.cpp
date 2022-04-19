#include <iostream>

using namespace std;

int main()
{ int n, m;
cin>>n;
cin>>m;
int A[n+1][m+1];
for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        A[i][j]=j;
        if(i>j){
            A[i][j]=i;
        }
    }
}

for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        cout<< A[i][j]<< " " ;
        }
        cout<< endl;
}

    return 0;
}
