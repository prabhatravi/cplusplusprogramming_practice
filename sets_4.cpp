#include <bits/stdc++.h>
using namespace std;
set <int> s;

void sInsert(int x) {
    s.insert(x);
}

void sDelete(int x) {
    cout << "Deleted Element: " << x << endl;
    s.erase(x);
}

bool sSearch(int x) {
    cout << "Searching for " << x << ": ";
    if (s.find(x) !=  s.end())
        return true;
    else
        return false;
}

void next_greater(int x) {
    auto it = upper_bound(s.begin(), s.end(), x);
    cout << "Element greater to " << x;
    cout << ": " << *it << endl;
}

void get_rank(int x) {
    auto it = lower_bound(s.begin(), s.end(), x);

    int p = distance(s.begin(), it);
    cout << "Rank of " << x;
    cout << ": " << p+1 << endl;
}

int main() {
    sInsert(1);
    sInsert(37);
    sInsert(40);
    sInsert(45);
    sInsert(2);
    sInsert(18);

    cout << "The set is:" << endl;
    for (auto it = s.begin();
         it != s.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // Deleting elements 1 & 37
    sDelete(1);
    sDelete(37);

    // Displaying the set
    cout << "The set is:" << endl;
    for (auto it = s.begin();
         it != s.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // Inserting back the elements
    sInsert(1);
    sInsert(37);

    cout << "The new set is:" << endl;

    // Displaying the set
    for (auto it = s.begin();
         it != s.end(); it++)
        cout << *it << ' ';
    cout << endl;

    // Serching for the elements
    // returns true or 0
    cout << sSearch(2) << endl;

    // returns false or 0
    cout << sSearch(3) << endl;

    // Finding the next greater element
    // to 18
    next_greater(18);

    // Getting the rank of 18
    get_rank(18);
    return 0;
}