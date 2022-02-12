#include<iostream>
using namespace std;
int fibonnaci(int n){
    int a=0;
    int b=1;
    for(int i=3;i<=n;i++){
        int nextnumber=a+b;
        a=b;
        b=nextnumber;
    }
    return b;
}
int main(){
    int n;
    cout<<"enterthe value of n"<<endl;
    cin>>n;
    int ans=fibonnaci(n);
    cout<<"nth term ofthe series is"<<ans<<endl;
    return 0;
}