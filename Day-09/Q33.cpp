#include<iostream>
using namespace std;
int main(){
    //WAP to rpint reverse star pattern
    int n;
    cout<<"Enter the length of pattern: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;

}