class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Vector to store answer indices
        vector<int> indices(2);
          // Hash map: number -> index
        unordered_map<int, int> visitedElements;

        for (int index = 0; index < nums.size(); ++index) {

            int currElement = nums[index];

            // Number needed to reach target
            int numToFind = target - currElement;

            // Check if complement already exists
            if (visitedElements.count(numToFind)) {

                indices[0] = visitedElements[numToFind];
                indices[1] = index;

                return indices;
            }

            // Store current element and its index
            visitedElements[currElement] = index;
        }

        return indices;
    }
};
       