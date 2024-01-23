/*
INT_MAX = 2147483647   (for 32-bit Integers)
INT_MAX = 9,223,372,036,854,775,807   (for 64-bit Integers)

INT_MIN = –2147483648   (for 32-bit Integers)
INT_MIN = –9,223,372,036,854,775,808   (for 64-bit Integers)

==> bruteforce 
Time complexity analysis
O(total no of subarray * finding sum of each subarray) => O(N³)

==> 2nd approach
We can reduce time complexity to O(N²) 
by using cumulative sum array, which will help in finding subarray sum with O(1) complexity.

==> 3rd approach
An element can either be a part of subarray sum or not.
-for a random index m there are 2 possibilities
- either element at index m is part of max subarray sum or max subarray sum is present in left subarray of m or right subarray of m
-With this we can say that we can apply divide and conquer approach to solve this problem.
-O(N*logN) solution.

==> optimised and the best one using kadens
We can also solve this problem using Kadane’s algorithm.

Algorithm

Keep adding numbers from left to right
if curSum > maxSum update maxSum
if curSum is negative set it to zero.
*/
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> nums) {
        int maxSum = INT_MIN,curSum = 0;
        for(int i=0;i<nums.size();i++){
            curSum += nums[i];
            maxSum = max(maxSum,curSum);
            if(curSum<0) curSum = 0;
        }
        return maxSum;
    }
int main()
{
	vector<int>nums = {1,2,4,1,34,5,-43,4,23,34};
	cout<<maxSubArray(nums);
}