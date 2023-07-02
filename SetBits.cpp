class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        // int k = R - L + 1;
        int lc = x;
        int bc = y;
        int xl = l;
        l--;
        while(l--)
        {
            x = x/2;
            y = y/2;
        }
        for(int i =xl;i<=r;i++)
        {
            int k1 = x%2;
            int k2 = y%2;
            if(k2)
            lc += (k2-k1)*pow(2,i-1);
            // print()
            x= x/2;
            y= y/2;
        }
        return lc;
    }
};
