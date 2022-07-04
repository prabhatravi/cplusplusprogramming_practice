// C++ Program to illustrate map in C++ STL

#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    // empty map container
    map<int, int> m;

    // Insert elements using insert() function
    m.insert({ 10, 100 });
    m.insert({ 30, 300 });

    // Inserting using "[]" operator
    m[20] = 200;

    // Donot provide any value with key 40
    // The operator access the key and since
    // it doesnot exists, it will insert defaut
    // value of int
    m[40];

    // Traverseing map
    cout << "The map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // We can also update the value of an existing
    // key-value pair using "[]" operator which
    // is not possible with insert() function
    m[40] = 400;

    // Traverseing map
    cout << "\nThe map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // Check if the element 3 exists
    // in the map or not
    if (m.find(30) != m.end())
        cout << "30 Found!\n\n";
    else
        cout << "30 Not Found!\n";

    // Using find() function to print elements
    // starting from a given key
    cout << "The elements from position 30 in map are : \n";
    cout << "KEY\tELEMENT\n";

    // find() function finds the position at which 3 is
    for (auto itr = m.find(30); itr != m.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';
    
    // Using count to check if the key 4 exists
    if (m.count(4) != 0)
        cout << "\n4 Found!\n";
    else
        cout << "\n4 Not Found!\n";

    // Using count to check if the key 4 exists
    if (m.count(40) != 0)
        cout << "\n40 Found!\n";
    else
        cout << "\n40 Not Found!\n";

    // when 2 is present
    auto it = m.lower_bound(20);
    cout << "The lower bound of key 20 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 3 is not present
    // points to next greater after 3
    it = m.lower_bound(25);
    cout << "The lower bound of key 30 is ";
    cout << (*it).first << " " << (*it).second;

    // when 45 exceeds the exceeds the maximum key in the container, then the iterator returned points to the number of elements in the map as key and element=0
    it = m.lower_bound(45);
    cout << "\nThe lower bound of key 35 is ";
    cout << (*it).first << " " << (*it).second;
    cout << endl;

    it = m.upper_bound(10);
    cout << "The upper bound of key 10 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 21 is not present
    it = m.upper_bound(21);
    cout << "The upper bound of key 21 is ";
    cout << (*it).first << " " << (*it).second << endl;

    // when 47 is exceeds the maximum key, so size
    // of mp is returned as key and value as 0.
    it = m.upper_bound(47);
    cout << "The upper bound of key 47 is ";
    cout << (*it).first << " " << (*it).second << "\n";

    // function to erase given position
    it = m.find(20);

    // Passing iterator pointing to key 2
    // to erase it
    m.erase(it);

    cout << "Size after erasing one element: " << m.size() << "\n";

    // Passing key directly to erase element
    m.erase(40);

    cout << "Size after erasing second element: " << m.size() << "\n";

    // Erasing complete range
    m.erase(m.begin(), m.end());

    cout << "Final Size: " << m.size() << "\n";

    return 0;
}