#include<bits/stdc++.h>
using namespace std;

// Function to find length of longest increasing subsequence
int LIS(int arr[], int i, int n, int prev)
{
	if (i == n)
		return 0;
	int excl = LIS(arr, i + 1, n, prev);

	// case 2: include the current element if it is greater
	// than previous element in LIS
	int incl = 0;
	if (arr[i] > prev)
		incl = 1 + LIS(arr, i + 1, n, arr[i]);

	// return maximum of above two choices
	return max(incl, excl);
}

// main function
int main()
{
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];

	cout << "Length of LIS is " << LIS(arr, 0, n, INT_MIN);

	return 0;
}
