#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        
    }
    return fact;
}
int nCr(int n,int r){
    int num=factorial(n);
    int dem=factorial(r)*factorial(n-r);
    int ans=num/dem;
    return ans;
}
int main(){
    int n,r;
    cout<<"enter the n and r"<<endl;
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<"answer is"<<ans<<endl;
}
