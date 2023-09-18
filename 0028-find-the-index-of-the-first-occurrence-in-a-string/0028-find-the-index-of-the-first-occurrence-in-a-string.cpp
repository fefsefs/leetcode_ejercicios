class Solution {
public:
    int strStr(string haystack, string needle) {
        //int haySize = haystack.size() - 1, needSize = needle.size() - 1;
        bool flg = false;
        for(int i = 0; i <= haystack.size() - 1; i++){
            if(haystack[i] == needle[0]){ 
                for(int j = 0; j <= needle.size() - 1; j++){
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