#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the triangle: ";
    cin>>n;
    for(char i='A';i<'A'+n;i++){
        for(int j=1;j<=i-'A'+1;j++){
            cout<<i;
        }
        cout<<endl;
    }

}