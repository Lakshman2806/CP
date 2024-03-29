vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> ans(A,vector<int>(A,0));
    int top =0;
    int bottom = A-1;
    int left =0;
    int right = A-1;
    int dir =0;
    int count =1;
    while(top<=bottom && left<=right)
    {
        if(dir ==0)
        {
            for(int i =left; i<=right;i++)
            {
                ans[top][i] = count;
                count++;
            }
            top++;
        }
        else if(dir ==1)
        {
            for(int i =top; i<=bottom;i++)
            {
                ans[i][right] = count;
                count++;
            }
            right--;
        }
        else if(dir ==2)
        {
            for(int i =right; i>=left;i--)
            {
                ans[bottom][i] = count;
                count++;
            }
            bottom--;
        }
        else if(dir ==3)
        {
            for(int i =bottom; i>=top;i--)
            {
                ans[i][left] = count;
                count++;
            }
            left++;
        }
        dir = (dir+1)%4;
    }
    return ans;
}
