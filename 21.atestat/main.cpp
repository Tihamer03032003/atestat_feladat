#include <iostream>
#include <string>

using namespace std;

int main()
{ string s;
cin>>s;
int elso=0, utolso;
for(int i=0; i<s.size(); i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        if(elso==0){
            elso=i;
        }else{
        utolso=i;
        }
    }
}
for(int i=0; i<s.size(); i++){
    if(i!=elso)
        if(utolso!=i){
        cout<< s[i];
    }
}
    return 0;
}
