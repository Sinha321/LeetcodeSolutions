//problem number 11

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,maxi=0;
        while(left<right)
        {
            int w=right-left;
            int h=min(height[left],height[right]);
            maxi=max(maxi,(w*h));
            if(height[left]<height[right])
            {
                left++;
            }
            else if(height[left]>height[right])
            {
                right--;
                
            }
            else
            {
                left++;
                right--;
            }
        }
        return maxi;
        
    }
};
