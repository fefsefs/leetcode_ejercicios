class Solution {
public:
    int strStr(string haystack, string needle) {
        int haySize = haystack.size() - 1, needSize = needle.size() - 1, indxSav = 0;
        bool flg = false;
        for(int i = 0; i <= haySize; i++){
            if(haystack[i] == needle[0]){ 
                for(int j = 0; j <= needSize; j++){
                    if(haystack[i + j] != needle[j]){
                        flg = true;
                        break;
                    }
                }
                if(!flg) return i;
                flg = false;
            }
        }
        return -1;
    }
};