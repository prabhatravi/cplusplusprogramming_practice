// CPP code to illustrate operators in pair
#include <iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int>pair1 = make_pair(9, 10);
    pair<int, int>pair2 = make_pair(9, 12);


    cout << (pair1 == pair2) << endl; // check first and second
    cout << (pair1 != pair2) << endl;  // check first and second
    cout << (pair1 >= pair2) << endl;  // check only first element, second if 1st is equal
    cout << (pair1 <= pair2) << endl;  // check only first element, second if 1st is equal
    cout << (pair1 > pair2) << endl;   // check only first element, second if 1st is equal
    cout << (pair1 < pair2) << endl;   // check only first element, second if 1st is equal

    return 0;
}