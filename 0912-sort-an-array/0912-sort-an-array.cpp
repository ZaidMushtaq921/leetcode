class Solution {
        private:
    void heapify(vector<int>& nums, int index, int size) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && (nums[left] > nums[largest] || (nums[left] == nums[largest] && left > largest))) {
            largest = left;
        }
        if (right < size && (nums[right] > nums[largest] || (nums[right] == nums[largest] && right > largest))) {
            largest = right;
        }

        if (largest != index) {
            swap(nums[index], nums[largest]);
            heapify(nums, largest, size);
        }
    }
public:
        
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();

        // Build a max heap
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(nums, i, size);
        }

        // Extract elements from the heap one by one
        for (int i = size - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, 0, i);
        }

        return nums;
    }

};