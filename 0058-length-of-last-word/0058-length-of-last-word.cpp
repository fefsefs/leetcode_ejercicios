class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, count_last_spaces = 0;
        for(int j = s.size()-1; s[j] == ' '; j--){
            count_last_spaces++;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                count++;
            }else if(!(i >= s.size() - count_last_spaces)){                 
                count = 0;
            }
        }
        return count;
    }
};