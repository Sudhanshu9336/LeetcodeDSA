class Solution {
public:
    int count = 0; // global counter

    void countPairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        for (int i = low; i <= mid; i++) {
         while (right <= high && (long long)nums[i] > 2LL * nums[right]) {
    right++;
}
        count+=right - (mid + 1);
        }
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }
        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return;
        int mid = (low + high) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {
        count = 0; 
        mergeSort(nums, 0, nums.size() - 1);
        return count;
    }
};

// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         int count=0;
//         int n=nums.size();
//         for(int i=0;i<n-1;i++){
//             int p=nums[i];
//            // int m=p/2;
//             for(int j=i+1;j<n;j++){
//                 if(p>nums[j]*2){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };