class Solution {
public:
    string largestOddNumber(string num) {
        int ind = -1;
        string result = "";
        for(int i = num.length()-1 ; i>=0 ; i--){
            if((num[i] - '0') % 2 == 1){
                ind = i;
                break;
            }
        }
            int i = 0;
            while(i<=ind && num[i] == '0')  i++;
            result = num.substr(i, ind-i+1);
            return result;          
        
    }
};