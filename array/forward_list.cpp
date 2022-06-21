 // CPP program to implement
// doubly linked list
#include <forward_list>
#include <iostream>
using namespace std;

int main()
{

    // Initialising a forward list
    forward_list<int> l = { 10, 15, 20 };

    // Pushing elements into the list
    l.push_front(5);

    // Pushing elements into the list
    l.push_front(3);

    // Popping out elements from list
    l.pop_front();

    // Displaying the list
    for (int x : l)
        cout << x << " ";
    cout << endl;

    forward_list<int> m;
    m.assign({10,20,30,40,50});
    m.remove(20);
    for (auto it = m.begin(); it != m.end(); it++)
    	cout << (*it) << " ";
    return 0;
}