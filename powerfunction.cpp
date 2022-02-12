#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    int i=1;
    while(i<=b){
        ans=ans*a;
        i++;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    int answer=power (a,b);
    cout<<"answer is"<<answer<<endl;
    return 0;

}