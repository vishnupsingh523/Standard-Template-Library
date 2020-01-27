// In this program we would be using erase function with the help of it we can decrese the elements of vector or we erase the elements of any vector.
//its syntax is ........ <vector_name>.erase(<vetor name>.begin()+x); ....... to erase any particular element from its index value.
//and another syntax is .... <vector_name>.erase(range from, range upto);....... to erase elements within the particular range.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    vector<int> v;
    int N;
    cin>>N;
    int a,b,x;
    int enter;
    for(int i=0;i<N;i++){
        cin>>enter;
        v.push_back(enter);
    }
    scanf("%d",&x);
    v.erase(v.begin()+x-1);
    scanf("%d %d",&a,&b);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
