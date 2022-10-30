//problem number 27
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=0,j=0;
        int a[nums.size()];
    // cout<<n<<endl;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=val){
                
                a[j]=nums[i];
                n++;
                j++;
            }
        }
        nums.clear();
        for(int i=0;i<n;i++){
            nums.push_back(a[i]);
        }
        // cout<<a.size();
        return nums.size();
    }
};
