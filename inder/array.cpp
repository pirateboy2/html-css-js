

#include <iostream>
using namespace std;

void fun(int arr[]) // SAME AS void fun(int *arr)
{
	unsigned int n = sizeof(arr) / sizeof(arr[0]);
	cout << "\nArray size inside fun() is " << n;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	unsigned int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Array size inside main() is " << n;
	fun(arr);
	return 0;
}
