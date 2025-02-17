//Leetcode: https://leetcode.com/problems/k-closest-points-to-origin/
//My Code:

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> q;
        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            double dis = sqrt(pow(x, 2) + pow(y, 2));
            q.push(make_pair(dis, i));
        }
        while (!q.empty() && k--) {
            int idx = q.top().second;
            q.pop();
            ans.push_back(points[idx]);
        }
        return ans;
    }
};
