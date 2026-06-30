#include<iostream>
using namespace std;
int main(){
    //WAP to find second largest element
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<"array["<<i<<"]"<<endl;
        cin>>array[i];

    }
    int max=array[0];
    int secondMax=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(secondMax<array[i] and array[i]!=max){
            secondMax=array[i];
        }
    }
    cout<<"The second max element in array = "<<secondMax<<endl;
    return 0;

}

