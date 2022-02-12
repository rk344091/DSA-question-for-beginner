#include<iostream>
using namespace std;
int ap(int n){
    int ap=(3*n)+7;
    return ap;
}
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int ans=ap(n);
    cout<<"nth term will be"<<ans<<endl;
}