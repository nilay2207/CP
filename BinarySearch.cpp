#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
	if (end >= start) {
		int mid = start + (end - start) / 2;
		if (arr[mid] == target)
			return mid;

		else if (arr[mid] > target)
			return binarySearch(arr, start, mid - 1, target);

		else{
            return binarySearch(arr, mid + 1, end, target);
        }
        
	}
	return -1;
}

int main()
{
    int n;
    cin >> n;
	int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
	int target;
    cin >> target;
	int result = binarySearch(arr, 0, n - 1, target);
	cout << result << endl;
	return 0;
}
