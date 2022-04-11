#include <iostream>

using namespace std;

int main()
{
    int max=0,novelo=1;
    int n, x, v[10000]={0};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v[x]++;
    if(max<x){
        max=x;
    }
    }
    bool van;
    for(int i=0; i<max-1; i++){
        if(v[i]!=0){
            if(v[i]==v[i+novelo]){
             van=true;
             novelo++;
               }else{
               van=false;
               break;}
        }
    }
    if(van){
        cout<< "DA";
    }else{
    cout<< "NU";}




    return 0;
}
