#include<iostream>
using namespace std;
int main(){
    //WAP to print character pyramid
    int n;
    cout<<"Enter the number of rows in the pyramid: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space = n;space>i;space--){
            cout<<" ";

        }
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch++;

        }
        ch -=2;
        for(int k=1;k<i;k++){
            cout<<ch--;
        }
        cout<<endl;
    }
    return 0;

}
