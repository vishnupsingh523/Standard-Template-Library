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
    int pos;
    cout<<endl<<"enter the postition : ";
    cin>>pos;

    let.emplace(let.begin()+pos,a);
    cout<<endl<<endl;
    for(it= let.begin();it!=let.end();it++)
    cout<<*it<<" ";
}
