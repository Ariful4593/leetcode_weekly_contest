#include<bits/stdc++.h>

using namespace std;

vector <int> rearrangeArray(vector <int>& nums)
{

    //First way to solve this problem

    /*sort(nums.begin(), nums.end());
        vector<int> ans(nums.size());
        for(int i = 0; i <= nums.size() / 2; i++) {
            if(i * 2 < nums.size()){
                ans[i * 2] = nums[i];
            }
            if(i * 2 + 1 < nums.size() && i + (nums.size() + 1) / 2 < nums.size()){
                ans[i * 2 + 1] = nums[i + (nums.size() + 1) / 2];
            }
    }
    return ans;*/


    //Second way to solve this problem
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size()-1;i+=2){
        swap(nums[i],nums[i+1]);
    }
    return nums;


    /*Third way to solve this problem
    sort(nums.begin(), nums.end());
    for(int i = 1; i <= nums.size() / 2; i += 2){
        if(nums[i - 1] + nums[i + 1] / 2 == nums[i]){
            swap(nums[i], nums[i+1]);
        }
    }
    return nums;*/
}
int main()
{
    vector <int> nums, data;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    data = rearrangeArray(nums);
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << " ";
    }
}
