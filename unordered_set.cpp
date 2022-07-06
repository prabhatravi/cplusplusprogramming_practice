// C++ program to illustrate unordered_set

#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std; 

int main()
{
    unordered_set<int> s;
    
    // Inserting elements using 
    // insert() function
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(15);
    
    // Traversing the unordered_set
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    
    cout<<"Size of unordered_set: "<<s.size()<<endl;

    if (s.find(10) == s.end())
        cout << "Not FOund \n";
    else
        cout << "FOund \n";

    if (s.count(10) == 1)
        cout << "10 found \n";
    else
        cout << "10 not found";

    s.erase(5);
    cout<<"Size of unordered_set: "<<s.size()<<endl;

    // Clear all elements
    //s.clear();
    //other way to delete the range
    s.erase(s.begin(), s.end());
    
    cout<<"Size after clearing unordered_set: "
        << s.size()<<endl;
    
    return 0;
}