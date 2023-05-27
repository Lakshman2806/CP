int Solution::solve(string A) {
    stack<char>s;
    for(auto &i: A)
    {
        if(i=='(')
        {
            s.push('(');
        }
        else{
            if(s.empty())
            {
               return 0; 
            }
            s.pop();
        }
    }
    return s.empty();
}
