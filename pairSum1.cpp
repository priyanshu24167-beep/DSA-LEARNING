#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {2,7,11,15};
    vector<int> ans;
    int target = 18;

    for(int i = 0; i < nums.size(); i++) {

        for(int j = i + 1; j < nums.size(); j++) {

            if(nums[i] + nums[j] == target) {

                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    cout << ans[0] << " " << ans[1];

    return 0;
}