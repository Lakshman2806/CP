vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<pair<int, int>> ans;
    int l = A.size();
    for (int i = 0; i < l; i++)
    {
        if (i == 0)
        {
            ans.push_back(make_pair(-1, -1));
            continue;
        }
        if (A[i - 1] < A[i])
        {
            ans.push_back(make_pair(A[i - 1], i - 1));
        }
        else
        {
            int x = i - 1;
            bool flag = false;
            while (ans[x].first != -1 && x != -1)
            {
                if (ans[x].first < A[i])
                {
                    flag = true;
                    ans.push_back(make_pair(ans[x].first, ans[x].second));
                    break;
                }
                else
                {
                    x = ans[x].second;
                }
            }
            if (!flag)
            {
                ans.push_back(make_pair(-1, -1));
            }
        }
    }
    vector<int> realans;
    for (int i = 0; i < l; i++)
    {
        realans.push_back(ans[i].first);
    }
    return realans;
}
