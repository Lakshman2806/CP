int binarySearch(const vector<int>& arr, int target, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;  // Position to insert the target element
}



void Solution::merge(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int m = B.size();
    vector<int>C(n+m);
    int i =0; 
    int j =0;
    int k =0;
    while((i<n) && (j<m))
    {
        if(A[i]<=B[j])
        {
            C[k++] = A[i++];
        }
        else{
            C[k++] = B[j++];
        }
    }
    while(i<n)
    {
        C[k++] = A[i++];
    }
    while(j<m)
    {
        C[k++] = B[j++];
    }
    A.resize(n+m);
    for(int i =0;i<(n+m);i++)
    {
        A[i] = C[i];
    }
}
