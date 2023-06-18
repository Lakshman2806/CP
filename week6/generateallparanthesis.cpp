int Solution::isValid(string A) {
    stack<char> st;
    int k = A.size();
    for(int i = 0; i<k; i++)
    {
        if (A[i] == '(' || A[i] == '{' || A[i] == '[')
        {
            st.push(A[i]);
        }
        else
        {
            if (st.empty())
            {
                return 0;
            }
            else
            {
                if (A[i] == ')')
                {
                    if (st.top() == '(')
                    {
                        st.pop();
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if (A[i] == '}')
                {
                    if (st.top() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        return 0;
                    }
                }
                else if (A[i] == ']')
                {
                    if (st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }
    if (st.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
