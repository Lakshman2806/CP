public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>high)
        {
            return;
        }
        int ind = Solution::partition(arr,low,high);
        quickSort(arr,low,ind-1);
        quickSort(arr,ind+1,high);
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       // Your code here
       int pivot = a[low];
       int j = low+1;
       for(int i = low+1;i<=high;i++)
       {
           if(pivot>a[i])
           {
               swap(a[j],a[i]);
               j++;
           }
       }
       swap(a[low],a[j-1]);
       return j-1;
    }
