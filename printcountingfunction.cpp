#include<iostream>
using namespace std;
void printcounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    printcounting(n);
}