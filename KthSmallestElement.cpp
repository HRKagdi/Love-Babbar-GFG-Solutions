//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
// Kth Smallest element

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        int length=r-l+1;
        sort(arr,arr+length);
        return arr[k-1];
    }
};
