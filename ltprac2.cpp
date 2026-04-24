/*In modern C++ (on LeetCode, CodeChef, and most computers):
int is almost always 32-bit.
long long is 64-bit.
char is 8-bit.*/

/*can remember the logic through dividend=divisor*question+remainder
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int digit = x%10; //remainder(digit)
            if( (ans>INT_MAX/10) || (ans<INT_MIN/10) ){  //INTMAX and INT MIN are predef macros having values 2^31-1 and -2^31 respectively
                return 0;
            }
            ans=(ans*10) + x%10;
            x=x/10;
        }
        return ans;
    }
};
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};
