#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> number;
    
    cout<<"Enter the size:  ";
    int size;
    int elements;
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>elements;
        number.push_back(elements); //inserting the elements in the list using the push_back() function;
    }
    // creating an iterator for the list<int>
    for(list<int>::iterator itr=number.begin();itr!=number.end();itr++)
    cout<<endl<<*itr;

    //erasing the values from the particular position using erase function;
    cout<<"\nEnter the index value to delete the element from the list:\n";
    cin>>elements;
    
    for(list<int>::iterator eraseIt=number.begin();eraseIt!=number.end();eraseIt++)
    {
        if(*eraseIt==elements)
        eraseIt = number.erase(eraseIt);
    }
    for(list<int>::iterator itr=number.begin();itr!=number.end();itr++)
    cout<<endl<<*itr;

    return 0;
}