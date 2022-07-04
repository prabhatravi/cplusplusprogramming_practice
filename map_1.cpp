// A C++ program to print an array according
// to the order defined by another array
#include <bits/stdc++.h>
using namespace std;

// Function to print an array according
// to the order defined by another array
void print_in_order(int a1[], int a2[], int n, int m)
{
    // Declaring map and iterator
    map<int, int> mp;
    map<int, int>::iterator itr;

    // Store the frequncy of each
    // number of a1[] int the map
    for (int i = 0; i < n; i++)
        mp[a1[i]]++;

    // Traverse through a2[]
    for (int i = 0; i < m; i++) {
        // Check whether number
        // is present in map or not

        if (mp.find(a2[i]) != mp.end()) {
            itr = mp.find(a2[i]);

            // Print that number that
            // many times of its frequncy
            for (int j = 0; j < itr->second; j++)
                cout << itr->first << " ";
            mp.erase(a2[i]);
        }
    }

    // Print those numbers that are not
    // present in a2[]
    for (itr = mp.begin(); itr != mp.end(); itr++) {
        for (int j = 0; j < itr->second; j++)
            cout << itr->first << " ";
    }

    cout << endl;
}

// Driver code
int main()
{
    int a1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int a2[] = { 2, 1, 8, 3 };
    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);

    print_in_order(a1, a2, n, m);

    return 0;
}