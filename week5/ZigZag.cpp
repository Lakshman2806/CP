string Solution::convert(string A, int B) {
    if(B==1)
        return A;
    int k = 1;
    vector<string>ans(B+1);
    int point = 1;
    for(int i =0;i<A.size();i++)
    {
        if(point>B)
        {
            point = B-1;
            k = -1;
        }
        if(point < 1)
        {
            point = 2;
            k = 1;
        }
        ans[point] += A[i];
        point += k;
    }
    string x;
    for(int i =1;i<=B;i++)
    {
        x += ans[i];
    }
    return x;
}
