#include<iostream>
using namespace std;
//Sum of first N natural number
int main(){
    int n;
    int sum=0;
    cout<<"Enter th nth number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;

    }
    cout<<"Sum of first N natural number: "<<sum<<endl;
    return 0;
}