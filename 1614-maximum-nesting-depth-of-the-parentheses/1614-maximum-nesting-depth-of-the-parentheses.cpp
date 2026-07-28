class Solution {
public:
    int maxDepth(string s) {
        int openbracket = 0;
        int ans = 0;

        for (char ch : s){
            if(ch == '('){
                openbracket++;
            }
            else if(ch == ')'){
                openbracket--;
            }
            ans = max(ans,openbracket);
        }
        return ans;
    }
};