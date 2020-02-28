#include<iostream>
#include<vector>

using namespace std;

int main()
{
    /*vector is like an array but it is allocated dinamically
    whereas the array is not*/
    
    vector<string> something;
    something.push_back("one");
    something.push_back("nine");
    something.push_back("apple");
    something.push_back("Oswal");
    
    for(int i=0;i<something.size();i++){
        cout<<something[i]<<endl;
    }

    /*Another way of printing the vector values using the iterator
    and some functions like end() and begin() to iterate it */

    vector<string>::iterator itr=something.begin();
    for(;itr!=something.end();itr++)
    cout<<endl<<*itr;
   
    return 0;
}