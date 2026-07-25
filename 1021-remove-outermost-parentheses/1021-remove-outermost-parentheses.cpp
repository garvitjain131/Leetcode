class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int n = s.length();
        int levelcnt = 0;
        for (int i=0; i<n ; i++){
            if(s[i] == '('){
                if(levelcnt > 0){
                    result += s[i];
                }
                levelcnt++;
            }
            else if(s[i] == ')'){
                levelcnt--;
                if(levelcnt > 0){
                    result += s[i];
                    
                }
               
            }
        }
        return result;
    }
};