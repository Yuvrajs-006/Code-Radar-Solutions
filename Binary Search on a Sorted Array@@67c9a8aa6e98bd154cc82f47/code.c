int binarySearch(int arr[],int n,int target){
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;  // Element found

        if (arr[mid] < key)
            low = mid + 1;  // Search in right half
        else
            high = mid - 1; // Search in left half
    }

    return -1; 

}