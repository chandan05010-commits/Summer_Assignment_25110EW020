#include<iostream>
using namespace std;
int main(){
    //WAP to print array
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: "<<"A["<<i<<"]"<<":";
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}






