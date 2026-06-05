#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j;

        }
        cout<<endl;
    }
    return 0;

}