#include <bits/stdc++.h>
using namespace std;

int robing(vector<int> &nums, int start, int end)
{
    int prev = 0, curr = 0;
    for (int i = start; i <= end; i++)
    {
        int temp = max(prev + nums[i], curr);
        prev = curr;
        curr = temp;
    }
    return curr;
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
    {
        return nums[0];
    }

    int robFirst = robing(nums, 0, n - 2);
    int skipFirst = robing(nums, 1, n - 1);

    return max(robFirst, skipFirst);
}

int main()
{

    string s;
    vector<int> nums;
    getline(cin, s);
    stringstream ss(s);
    double num;

    while (ss >> num)
    {
        nums.push_back(num);
    }

    int result = rob(nums);
    cout << result << "\n";

    return 0;
}
