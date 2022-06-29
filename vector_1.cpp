#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {10, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> v(arr, arr+n);
    
    // Traversing vector using new iterator
    // using auto keyword
    for(auto itr = v.begin(); itr!=v.end(); 
                                       itr++)
        cout<<*itr<<" ";
        
    return 0;
}