#include<iostream>
using namespace std;
// Printing table
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" "<<"*"<<" "<<i<< "="<<n*i<<endl;
    }
    return 0;
}