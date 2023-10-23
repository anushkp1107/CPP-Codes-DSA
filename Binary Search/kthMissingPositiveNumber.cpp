/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.
1 <= arr.length <= 1000
1 <= arr[i] <= 1000
1 <= k <= 1000
arr[i] < arr[j] for 1 <= i < j <= arr.length
*/

#include <iostream>
#include <vector>

using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int low, high, mid, n, missing;
    n = arr.size();
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        missing = arr[mid] - (mid + 1);

        if (missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return k + high + 1;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array in strictly increasing order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int result = findKthPositive(arr, k);
    cout << "The " << k << "th missing positive integer is: " << result << endl;

    return 0;
}
