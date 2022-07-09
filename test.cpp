#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
	vector  v = {1,5,23,90,15,35};
	cout<<is_heap(v.begin(), v.end());
	make_heap(v.begin(), v.end());
	cout<<is_heap(v.begin(), v.end());
}