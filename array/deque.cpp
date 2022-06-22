#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    deque<int> dq1 = { 10, 20, 30, 40, 50 };
    cout<<"Deque: ";
    for(auto i:dq1)
    cout << i << " ";
}