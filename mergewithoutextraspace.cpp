void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
           int i = 0;
            int j = 0;
            int last = n-1;
            while (i <=last && j < m)
            {
                auto x = lower_bound(arr2+j, arr2 + m, arr1[i]);
                // What is the type of x?
                // x is a pointer to the first element in arr2 that is greater than arr1[i]
                int ind = x - arr2;
                ind--;
                if(ind>=0)
                {
                    int l =j;
                    int prev = j;
                    while(last>=i &&  l<=ind)
                    {
                        swap(arr1[last], arr2[l]);
                        last--;
                        l++;
                        j++;
                    }
                    if(last<0)
                    {
                        break;
                    }
                }
                i++;
            }
            sort(arr1, arr1 + n);
            sort(arr2, arr2 + m);
        } 
