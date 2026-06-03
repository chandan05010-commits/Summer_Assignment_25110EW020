#include<iostream>
using namespace std;
int main(){
    // WAP to find nth fibonacci series
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;
    int firstTerm=0;
    int secondTerm=1;
    int nextTerm;
    for(int i=1;i<n-1;i++){
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

    }
    cout<<"the nth of the fibonacci series: "<<nextTerm;
    return 0;
}



