#include <iostream>
#include <vector>
using namespace std;

vector<int> fun(int arr[], int n, int k) {
	vector<int> vec;
	//for (auto x:arr)
	for(int i = 0; i < n; i++) {
		if (arr[i] < k)
			vec.push_back(arr[i]);
	}
	return vec;
}

int main(int argc, char const *argv[])
{
	int arr[] = {17, 10, 20, 13, 7, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 15;

	for (auto x:fun(arr, n, k))
		cout << x << " ";

	return 0;
}