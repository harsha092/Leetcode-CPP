class Solution {
public:
    int strStr(string haystack, string needle) {
        int y=needle.size();
        for(int i=0;i<haystack.size();i++)
        {
            if(needle==haystack.substr(i,y))
            return i;
        }
        return -1;
    }
};
