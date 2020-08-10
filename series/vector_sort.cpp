// how to sort an array or some numbers given to us
// using the Standard template library
// header file : iostream, algorithm and vectors
// easiest way to sort

// LET'S START;

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int size;

    cout<<"Enter the size : ";
    cin>>size;

    vector<int> arr;
    int value;

    cout<<"\nEnter the values:"<<endl;
    for(int i=0; i<size;i++)
    {
        cin>>value;
        arr.push_back(value);
    }

    sort(arr.begin(),arr.end());

    // using iterator 
    // using for loop
    cout<<"The sorted array is : ";
    
        for(int j=0;j<size;j++)
        cout<<arr[j]<<" ";

    return 0;
}
