int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(A[i] == "+")
            {
                s.push(a + b);
            }
            else if(A[i] == "-")
            {
                s.push(b - a);
            }
            else if(A[i] == "*")
            {
                s.push(a * b);
            }
            else if(A[i] == "/")
            {
                s.push(b / a);
            }
        }
        else
        {
            s.push(stoi(A[i]));
        }
    }
    return s.top();
}
