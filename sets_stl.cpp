// in this we would be learning about sets....in stl which is very important for competetive programming.... 
// Syntax of set.... set<(data type)> <set_name>;
// Inserting element in the set.......... <set_name>.insert(<value or any element name>);
// Using find function in set... for finding an element in that particular set....
// Syntax for using find() function ...using iterator we can store the value of find() function .... <set_name>.find(value or variable having that element);

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    set<int>s;
    for(int i=0;i<n;i++)
        {
        int a;
        cin>>a;
        s.insert(a);
        }
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int q,t;
        cin>>t>>q;
        switch(t)
            {
            case 1:
            {
                s.insert(q);
                break;
            }
            case 2:
            {
                s.erase(q);
                break;
            }
            case 3:
            {
                set<int>::iterator itr=s.find(q);
                if(itr==s.end())
                   cout<<"No"<<endl;
                else
                   cout<<"Yes"<<endl;
                break;
            }
            }
        }
    return 0;
}
