#include<vector>
#include<iostream>
using namespace  std;


class Solution
{
public:
	int findMaxConsecutiveOnes(vector<int>& nums)
	{
		int counts=0,result=0;
		for (int num : nums)
		{
			if(num==1)
			{
				counts += 1;
			}else 
			{
				result = max(counts, result);
				counts = 0;
			}
			return max(result, counts);
		}
		
	}
	int max(int a,int b)
	{
		 int s=(a > b) ? a : b;
		 return  s;
	}
};

int main(int argc,char *argv[])
{
	Solution s;
	vector<int>nums = { 1,0,1,1,1 };
	cout<<s.findMaxConsecutiveOnes(nums);

}