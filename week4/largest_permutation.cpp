vector<int> Solution::solve(vector<int> &A, int B) {
    unordered_map<int, int> mp;
    vector<int> C(A.size());

    for (int i = 0; i < A.size(); i++)
    {
        mp[A[i]] = i;
        C[i] = A[i];
    }
    sort(C.begin(), C.end(), greater<>());
    int l = A.size();
    vector<int> ans(l);
    vector<int> vis(l, -1);
    int count = 0;
    while (B--)
    {
        if (count >= l)
            break;
        if (A[count] == C[count])
        {
            // ans[count++] = A[count];
            B++;
            if (A == C)
                break;
            else
            {
                count++;
            }
        }
        else
        {
            swap(A[count], A[mp[C[count]]]);
            mp[A[mp[C[count]]]] = mp[C[count]];
            count++;
        }
    }
    return A;
}
