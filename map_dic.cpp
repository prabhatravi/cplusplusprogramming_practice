// C++ code to implement dictionary
// using a multimap
#include <bits/stdc++.h>
using namespace std;

// Driver method
int main()
{
    // Creating a multimap
    multimap<string, string> dict;

    // Inserting key-value1 pair
    dict.insert(
        pair<string, string>(
            "Apple", "A fruit"));

    // Inserting key-value2 pair
    dict.insert(
        pair<string, string>(
            "Apple", "A company"));

    // Displaying the multimap
    for (auto itr = dict.begin();
         itr != dict.end(); itr++) {
        cout << itr->first << " ";
        cout << itr->second << " " << endl;
    }
}