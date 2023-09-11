bool helper(int num, int n)
{
    if(num<n)
        return true;
    if(num%n==0)
        return false;
    return helper(num-(num/n), n+1);
}


class Solution{
public:
    bool isLucky(int n) {
        // code here
        return helper(n, 2);
    }
};