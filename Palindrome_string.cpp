int Solution::isPalindrome(string A) {
    string updated;
    // update the string with no spaces, special characters and all lowercase
    for(int i =0; i< A.size(); i++)
    {
        if(isalnum(A[i]))
        {
            updated += tolower(A[i]);
        }
    }
    // check if the updated string is a palindrome
    for(int i =0; i< updated.size()/2; i++)
    {
        if(updated[i] != updated[updated.size()-1-i])
        {
            return 0;
        }
    }
    return 1;
}
