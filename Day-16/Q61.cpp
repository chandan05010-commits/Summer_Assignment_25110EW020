#include<iostream>
using namespace std;
int main(){
    //WAP to find missing number in array
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int array[n];
    for(int i=0;i<n-1; i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];

    }
    int a= array[0];
    int d=1;
    int expectedSum=n*((2*a+(n-1)*d))/2;
    int actualSum=0;
    for(int i=0;i<n-1;i++){
        actualSum+=array[i];
    }
    int missing = expectedSum-actualSum;
    cout<<"The missing number in array is = "<<missing;
    return 0;


}