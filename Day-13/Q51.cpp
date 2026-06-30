#include<iostream>
using namespace std;
//WAP to find smallest and largest element
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter elements"<<"array["<<i<<"]"<<" ";
        cin>>array[i];
    }
    int largest=array[0];
    int smallest=array[0];
    for(int i=0;i<n;i++){
        if(array[0]<array[i]){
            largest=array[i];
        }
    }
    for(int i=0;i<n;i++){
        if(array[0]>array[i]){
            smallest=array[i];
        }
    }
    cout<<"Largest element of the array: "<<largest<<endl;
    cout<<"Smallest element of the array: "<<smallest<<endl;
    return 0;

}