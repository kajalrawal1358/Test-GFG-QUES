class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        set<char>st;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                st.insert(tolower(s[i]));
            }
        }
        return st.size()==26;
    }
};