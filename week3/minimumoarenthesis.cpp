int Solution::solve(string A) {
    stack<char>s;
    for(auto &i:A)
    {
        if(i=='(')
        {
            s.push('(');
        }
        else{
            if(s.empty())
                s.push(')');
            else{
                if(s.top()=='(')
                    s.pop();
                else{
                    s.push(')');
                }
            }
        }
    }
        return s.size();
}
