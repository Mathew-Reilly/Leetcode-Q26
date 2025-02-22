// Mathew Reilly
// Binary Search Q26:
#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int counter = 0;
    int indexStart = 0;
    int indexDuplicates = 1;
    vector<int> result;

    if (nums.size() > 0)
    {
      result.push_back(nums[0]);
      counter = 1;
    }

    while (indexDuplicates < nums.size())
    {
      if (nums[indexStart] == nums[indexDuplicates])
      {
        indexDuplicates++;
      }
      else
      {
        counter++;
        indexStart = indexDuplicates;
        result.push_back(nums[indexStart]);
        indexDuplicates++;
      }
    }

    nums = result;
    return counter;
  }
};

// for (int i = 0; i < nums.size(); i++)
//     {
//       cout << nums[i] << ", ";
//     }
//     cout << "| ";

int main()
{
  Solution s;
  vector<int> v;
  v.push_back(1);
  v.push_back(1);
  v.push_back(2);
  // v.push_back(3);
  // v.push_back(3);
  // v.push_back(3);
  // v.push_back(5);
  // v.push_back(5);
  // v.push_back(6);
  // v.push_back(6);
  // v.push_back(6);
  // v.push_back(6);
  cout << "" << s.removeDuplicates(v);

  return 0;
}