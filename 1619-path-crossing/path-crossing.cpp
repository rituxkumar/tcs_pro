class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>st;
        int x=0;
        int y=0;
        st.insert({x,y});

        for(auto dir : path){
            if(dir == 'N') y++;
            else if(dir == 'E') x++;
            else if(dir == 'W') x--;
            else if (dir == 'S') y--;

            if(st.count({x,y}))
            return true;

            st.insert({x,y});
        }
        return false;
    }
};