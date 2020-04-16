// emplace_front() fucntion adds an element at the top (means at the first) of the deque or container 
// and it also increases the size of the deque by one

#include<iostream>
#include<deque>

using namespace std;

int main()
{

    deque<int> let;
    // here we can also use this deque with the other data types
    // for example : deque<char> name;
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

    let.emplace_front(a);
    cout<<endl<<endl;
    for(it= let.begin();it!=let.end();it++)
    cout<<*it<<" ";
}
