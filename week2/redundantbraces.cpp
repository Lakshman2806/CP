int Solution::braces(string A) {
    string onlybr;
    bool leffl = false;
    bool check =false;
    bool right = false;

    bool checkoper = false;
    bool oper = false;
    
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='(')
        {
            if(leffl)
            {
                check = true;
            }
            else{
                leffl = true;
            }
            checkoper = true;
            oper = false;
        }
        else if(A[i]==')')
        {
            if(check && !right)
            {
                right = true;
            }
            else if(check && right)
            {
                return 1;
            }
            else{
                check = false;
                leffl = false;
                right = false;
            }
            if(checkoper && !oper){
                return 1;
            }
            else{
                checkoper = false;
                oper = false;
            }
        }
        else 
        {
            if(checkoper)
            {
                if(A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/')
                {
                    oper = true;
                }
            }
            if(!check && leffl)
            {
                leffl = false;
            }
            if(check && right)
            {
                check = false;
                leffl = false;
                right = false;
            }
        }
    }
    return 0;
}
