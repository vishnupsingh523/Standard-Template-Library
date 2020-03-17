#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int N,Q;
    int x;
    vector<int> value;
    vector<int> ::iterator it;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>x;
        value.push_back(x);
    }

    cin>>Q;
    int arr[Q];
    for(int i=0;i<Q;i++)
        cin>>arr[i];
    for(int i=0;i<Q;i++)
    {
        it= find(value.begin(),value.end(),arr[i]);
        if(it!=value.end())
            cout<<"Yes "<<it-value.begin()+1<<endl;
        else
            for(int j=0;j<N;j++)
                if(arr[i]<value[j])
                {
                    cout<<"No "<<j+1<<endl;
                    break;
                }
    }
    return 0;
}