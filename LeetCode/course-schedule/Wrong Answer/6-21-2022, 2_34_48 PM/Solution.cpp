// https://leetcode.com/problems/course-schedule

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> vec;
        for(int i=0;i<prerequisites.size();i++){
            for(int j=0;j<prerequisites[i].size();j++){
                vec.push_back(prerequisites[i][j]);
            }
        }
        
        for(int i=0;i<vec.size();i++){
            if(i<vec.size()-1){
            if(vec[i]==vec[i+1]){
                return false;
            }
            }
        }
        
        return true;
        
    }
    

};