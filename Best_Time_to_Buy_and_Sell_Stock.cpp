// Problem 121. 
//Best Time to Buy and Sell Stock


class Solution {
public:
    int maxProfit(vector<int>& p) {
        stack<int> s;
        vector<int> v;
        s.push(p[0]);
        for(int i=1;i<p.size();i++){
            if(p[i]<s.top()){
                s.push(p[i]);
            }
            else{
                int dif = abs(p[i]-s.top());
                v.push_back(dif);
            }
        }
        if(v.size()==0)return 0;
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};
