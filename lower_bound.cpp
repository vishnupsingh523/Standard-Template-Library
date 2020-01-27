/*You are given  integers in sorted order. Also, you are given  queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.

Lower bound is a function that can be used with a sorted vector.
Sample Input

 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Sample Output

 Yes 1
 No 5
 Yes 6
 Yes 8/*
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{   
    vector<int> v;
    int N,enter;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>enter;
        v.push_back(enter);
    }

    int Q;
    cin>>Q;
    int a[Q];
    vector<int>::iterator low;
    for(int i=0;i<Q;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<Q;i++)
    {
        low=lower_bound(v.begin(),v.end(),a[i]);
        for(int j=0;j<v.size();j++)
        {
            if(v[j]==a[i])
            {enter=1;break;}
            else enter=0;
        }
        if(enter==1)
        cout<<"Yes "<<(low-v.begin()+1)<<endl;
        else
        cout<<"No "<<(low-v.begin()+1)<<endl;
    }
    return 0;
}
