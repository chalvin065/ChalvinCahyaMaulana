#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int a) //"a" is variable for the value to search
{
    while (l <= r) 
	{
        int m = l + (r - l) / 2;
        
        if (arr[m] == a)
            return m;
        else if (arr[m] < a)
            l = m + 1;    
        else
            r = m - 1;
    }
    return -1;
}

int main() 
{
    int arr[] = {1, 3, 5, 6, 8, 9, 11, 23, 34, 70}; //start with index "0"
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "--------Binary Search--------\n\n";
    
    for(int i=0;i<n;i++)
	{
		cout << arr[i] << ", " ;
	}

    cout << "\n\nEnter the target value : ";
    int a;
    cin >> a;

    int result = binarySearch(arr, 0, n - 1, a);
    
    if (result == -1)
        cout << "\nValue not found in array";
    else
        cout << "\nValue found at index : " << result;
    
    return 0;
}