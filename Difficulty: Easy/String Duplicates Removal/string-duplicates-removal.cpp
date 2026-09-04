class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        set<char>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()){
            ans+=s[i];
            st.insert(s[i]);
        }
    }
    return ans;
}
};