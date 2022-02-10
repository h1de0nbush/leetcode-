#include<vector>
#include<iostream>
using namespace  std;


class Solution
{
public:
	int findMin(vector<int>& nums)
	{
		int ans=nums[0];
		for (int num:nums)
		{
			ans = min(ans, num);
		}
		return ans;
	}
	int min(int a,int b)
	{
		 int s=(a > b) ? b : a;
		 return  s;
	}
};

int main(int argc,char *argv[])
{
	Solution s;
	vector<int>nums = { 4,5,6,7,0,1,2 };
	cout<<s.findMin(nums);

}