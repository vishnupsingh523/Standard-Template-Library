//In this we would be sorting an vector which is like an array but dyanamically..... with the help of the sort function I will sort the created vector.
//Syntax of sort function..... sort(<vector name>.begin(),<vector name>.end());

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    vector<int> v;  //creating vector...
    int n;
    cin>>n;     //taking no of values to enter in the vector..
    int enter;
    for(int i=0; i<n;i++)
    {
        cin>>enter;
        v.push_back(enter);     //function to enter the values in the vector...........
    }
    sort(v.begin(),v.end());    //sort function used.......
    for(int i=0; i<n;i++)
    cout<<v[i]<<" ";        //printing the values of sorted vector......

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
