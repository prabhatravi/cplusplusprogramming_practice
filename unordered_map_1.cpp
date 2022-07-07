// C++ program to find the winner
// of election and handle the tie case
#include <bits/stdc++.h>
using namespace std;

// Function to find the candidate
// receiving the maximum vote
string findWinner(string votes[], int n)
{
    // Creating an unordered_map
    unordered_map<string, int> mp;

    // Inserting the name and occurences
    for (int i = 0; i < n; i++) {
        mp[votes[i]]++;
    }
    string winner = "";
    int mx = -1;

    // Finding the winner with maximum
    // votes
    for (
        auto it = mp.begin();
        it != mp.end(); it++) {
        // Handling the tie case
        if (
            (
                it->second > mx)
            || ((it->second == mx)
                && (it->first < winner))) {
            mx = it->second;
            winner = it->first;
        }
    }
    return winner;
}

// Driver Method
int main()
{
    string votes[] = { "John", "Rohan",
                       "Jackie", "Rohan",
                       "Raju", "Jackie" };
    int n = 6;
    cout << findWinner(votes, 6);
}