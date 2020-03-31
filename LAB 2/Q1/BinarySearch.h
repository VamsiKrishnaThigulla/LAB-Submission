#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int begin, int end, int x) 
{
	if (end >= begin) 
	{
        int mid = (begin+end)/2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid+1;
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return BinarySearch(arr,begin,mid - 1,x);
        // Else the element can only be present
        // in right subarray
        return BinarySearch(arr,mid + 1,end,x);
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}
