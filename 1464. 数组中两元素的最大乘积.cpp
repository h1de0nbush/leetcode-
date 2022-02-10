#include<vector>
#include<iostream>
using namespace  std;


class Solution
{
public:
	int maxProduct(vector<int >& nums)
	{
		int max1 = 0, max2 = 0;
		for(int num:nums)
		{
			if(max1<num)
			{
				max2 = max1;
				max1 = num;
				
			}else if(max2<num)
			{
				max2 = num;
			}
		}
		return (max1-1)*(max2-1);
	}
};

int main(int argc,char *argv[])
{
	Solution s1;
	vector<int> n = { 3,4,5,2 };
	int s;
	s = s1.maxProduct(n);
	cout << s;

}