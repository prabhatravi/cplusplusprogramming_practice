
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    
    // Declaring Iterator
    vector<int> :: iterator itr;
    
    for(itr = v.begin(); itr!=v.end(); itr++)
        cout<<*itr<<" ";
    
    cout<<endl;
    
    // Traversing again using new iterator
    // using auto keyword
    for(auto itr2 = v.begin(); itr2!=v.end(); 
                                       itr2++)
        cout<<*itr2<<" ";
        
    return 0;
}