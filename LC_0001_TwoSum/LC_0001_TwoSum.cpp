// LC_0001_TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ret;
    unordered_set<int> met;
    for (int i=0; i < nums.size(); i++) {
        if (met.find(target - nums[i]) != met.end()) {
            ret.push_back(nums[i]);
            ret.push_back(target - nums[i]);
            return ret;
        }
        met.insert(nums[i]);
    }
    return ret;
}

int main()
{
    vector<int> problem = vector<int>{ 2, 7, 11, 15 , 6, 8};
    vector<int> sol = twoSum(problem, 14);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
