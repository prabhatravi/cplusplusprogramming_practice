#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a List
    list<int> l = {10, 20, 30};
    
    // Iterator pointing to first element
    auto itr = l.begin();
    
    // Advance the Iterator to point to 
    // second element
    itr++;
    
    // Insert 15 at second position keeping the 
    // interator at second position only
    itr = l.insert(itr, 15);
    
    // Insert 7 two times at position 2
    l.insert(itr, 3, 7);
    
    // Print elemnet at front and rear end
    cout<<l.front()<<" "<<l.back();
    
    // Print size of the list
    cout<<" "<<l.size()<<endl;
    for(auto i:l)
        cout<<i<< " ";
    
    return 0;
}