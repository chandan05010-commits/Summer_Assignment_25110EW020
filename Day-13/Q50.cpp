#include<iostream>
using namespace std;
//Wap to find sum and avg of array elements
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements"<<"array["<<i<<"]"<<":";
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    float avg=float(sum)/n;
    cout<<sum<<endl<<avg<<endl;
    return 0;

}