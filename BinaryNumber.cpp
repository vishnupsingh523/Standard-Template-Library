#include <bits/stdc++.h>

using namespace std;

vector<int> binaryNumber( vector<int> b)
{
    vector<int> c;
    int count =0;
        for(int j=b.size()-1;j>=0;j--)
        {
            if(b[j]==1)
            count+=1;
            else{
                c.push_back(count);
                count=0;
            }
        }
        return c;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
int a=n;
vector<int> b;
vector<int> c;
    for(int i=0;a!=0;i++)
    {
        b.push_back(a%2);
        a=a/2;
    }
    c = binaryNumber(b);
        sort(c.begin(),c.end());
        cout<<*max_element(c.begin(),c.end());
    return 0;
}
