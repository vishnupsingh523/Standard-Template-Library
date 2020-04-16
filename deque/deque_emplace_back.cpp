// emplace_back() fucntion adds an element at the end (means at the last) of the deque or container 
// and it also increases the size of the deque by one

#include<iostream>
#include<deque>

using namespace std;

int main()
{

    deque<int> let;
    int a;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        let.push_back(a);
    }

    deque<int>:: iterator it;

    for(it= let.begin();it!=let.end();it++)
    cout<<*it<<" ";
    cout<<endl<<"enter an element : ";
    cin>>a;

    let.emplace_back(a);
    cout<<endl<<endl;
    for(it= let.begin();it!=let.end();it++)
    cout<<*it<<" ";
}
