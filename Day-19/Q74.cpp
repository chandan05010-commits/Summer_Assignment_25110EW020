#include<iostream>
using namespace std;
//WAP to subtract matrix

int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows and number of column of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and column of second matrix: ";
    cin>>r2>>c2;
    int arr1[r1][c1];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[r2][c2];
    cout<<"Enter the ele of second array: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];

        }
    }
    int resultArr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            resultArr[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    cout<<"result array: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<resultArr[i][j]<<" ";
        }cout<<endl;    }


    return 0;







}