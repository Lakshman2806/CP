int BinarySearchinBitonic(int left,int right, vector<int>&A, int B)
{
    int mid = (right -left)/2 + left;
    if(left > right)
    {
        return -1;
    }
    if(A[mid] == B)
    {
        return mid;
    }
    if(A[mid]<B)
    {
        if(mid!=0 && (A[mid+1] < A[mid]) && (A[mid]< A[mid -1]))
        {
           return BinarySearchinBitonic(left, mid-1, A, B);
        }
        else{
            return BinarySearchinBitonic(mid+1,right,A,B);
        }
    }
    else{
        if(mid!=0 && (A[mid+1] < A[mid]) && (A[mid] < A[mid-1]))
        {
            return BinarySearchinBitonic(mid+1,right,A,B);
        }
        else if((A[mid+1] > A[mid]) && (A[mid] > A[mid-1])){
           return BinarySearchinBitonic(left, mid-1, A, B);
        }
        else{
            int x = BinarySearchinBitonic(left,mid-1,A,B);
            if(x==-1)
            {
                return BinarySearchinBitonic(mid+1,right,A,B);
            }
        }
    }
    return -1;
}



int Solution::solve(vector<int> &A, int B) {
    int x = A.size();
    return BinarySearchinBitonic(0,x-1,A,B);
}
