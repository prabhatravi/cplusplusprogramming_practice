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
    cout<<endl;
    auto it = dq1.begin();
    cout << "Iterator it points to: " << (*it) << "\n";
    it++;
    cout << "Iterator it points to: " << (*it) << "\n";
    cout << "Deque Size: " << dq1.size() << endl;
    dq1.pop_front();
    dq1.pop_back();
    cout<<"Deque: ";
    for(auto i:dq1)
        cout << i << " ";
    cout<<endl;
    cout << "Deque Size: " << dq1.size() << endl;
}