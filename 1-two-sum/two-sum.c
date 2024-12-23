int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* out = malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize - 1; i++) {
        for (int ii = i + 1; ii < numsSize; ii++) {
            if (nums[i] + nums[ii] == target) {
                out[0] = i;
                out[1] = ii;
                *returnSize = 2;
                return out;
            }
        }
    }
    *returnSize = 0;
    return out;
}