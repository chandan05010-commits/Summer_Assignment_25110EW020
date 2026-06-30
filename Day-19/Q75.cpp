#include<iostream>
using namespace std;
//WAP to transpose matrix
int main(){
    int r,c;
    cout<<"Enter the number of rows and coloumn in matrix: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the ele in arr: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=i+1 ;j<c;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
    }
    cout<<"Transpose of the array: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

