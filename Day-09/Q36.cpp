#include<iostream>
using namespace std;
int main(){
    //WAP to print hollow square
    int n;
    cout<<"ENter the length of the side of square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}