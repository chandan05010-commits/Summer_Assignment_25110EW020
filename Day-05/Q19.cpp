#include<iostream>
using namespace std;
int main(){
    //WAP to print the factors of the given number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factors of the given number:"<<endl;
    for(int i=1;i<=n/2;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}