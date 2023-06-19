int Solution::power(string A) {
    string b="2";
    reverse(A.begin(),A.end());
    while(b.size()<=A.size())
    {
        if(b==A)
        return 1;
        int carr=0;
        for(int i=0;i<b.size();i++)
        {
            int x=b[i]-'0';
            int y=x*2+carr;
            if(y>=10)
            carr=1;
            else
            carr=0;
            char r='0'+(y%10);
            b[i]=r;
        }
        if(carr)
        b.push_back('1');
    }
    return (b==A);
}
