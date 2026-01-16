class Solution {
public:
    bool rotateString(string s, string goal) {
            if(s.size()!=goal.size())return false;
        string dobl=s+s;
        return dobl.find(goal)!=string::npos;
    }
};