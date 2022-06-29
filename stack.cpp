// C++ program to illustrate Stack in STL

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // Creating a Stack using STL
    stack<int> s;
    
    // The push function inserts elements
    // at the top of Stack
    s.push(10);
    s.push(20);
    s.push(30);
    
    // After above operations, stack will 
    // look like:
    //     ******    
    //     * 30 *  <- Stack TOP
    //     * 20 *
    //     * 10 *
    //     ******
    
    // This will print the current size 
    // of stack which is 3
    cout<<s.size()<<endl;
    
    // This will print the top element 
    // of stack which is 30
    cout<<s.top()<<endl;
    
    // This will delete the top element 
    // of the stack
    s.pop();
    
    // This will print the top element 
    // of stack which is 20
    cout<<s.top();
}
