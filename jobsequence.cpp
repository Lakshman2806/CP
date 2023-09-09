bool sortJobs(Job a, Job b)
{
    return a.profit > b.profit;
}


class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, sortJobs);
        int maxi = 0;
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i].dead);
        }
        vector<int>tim(maxi+1, -1);
        for(int i = 0; i < n; i++)
        {
            int dead = arr[i].dead;
            while(dead>0 && tim[dead]!=-1)
                dead--;
            if(dead!=0)
                tim[dead] = arr[i].profit;
        }
        int count = 0;
        int prof = 0;
        for(int i = 1; i <= maxi; i++)
        {
            if(tim[i]!=-1)
            {
                count++;
                prof+=tim[i];
            }
        }
        return {count, prof};
    }
}