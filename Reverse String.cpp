class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int j = 0;
        int x = floor(n/2);
        
        for(int i=n-1; i >= x; --i){
            int tmp = s[j];
            s[j] = s[i];
            s[i] = tmp;
            j++;
        }
    }
};
