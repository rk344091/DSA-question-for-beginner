#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }

}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(prime(n)){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"is not a prime number"<<endl;
    }
    return 0;
}
