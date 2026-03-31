class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())return false;

        unordered_map<char,int>mp;
        if(s == goal){
            for(int i = 0 ; i<s.size();i++){
                mp[s[i]]++;
                if(mp[s[i]]>1)return true;
            }
            return false;
        }

        int count = 0;
        vector<int>diff;
        for(int  i = 0 ; i<s.size(); i++){
            if(s[i] != goal[i]){
                diff.push_back(i);
                count++;
            }
        }
        if(diff.size()!=2) return 0;

    swap(s[diff[0]],s[diff[1]]);
    return s== goal;

        
    }
};