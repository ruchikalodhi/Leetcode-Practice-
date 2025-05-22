class Solution {
public:
    int longestValidParentheses(string s) 
    {
        int c=0,b=0,ans=0;
        stack<int> stk;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                stk.push(i);
            else
                (!stk.empty() && s[stk.top()]=='(')  ? stk.pop() : stk.push(i);
        }    
    
       int y=s.size(),res=0;
        while(!stk.empty())
        {
            res=max(res,y-stk.top()-1);
            y=stk.top();
            stk.pop();
        }

        return max(res,y);
    }
};
