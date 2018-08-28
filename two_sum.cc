#include <stdio.h>
int* twoSum(int* nums, int numsSize, int target) {
    if(numsSize<=1){
        return 0;
    }
    int i = 0;
    while(i<numsSize){
        if(nums[i]<target){
            for(int j=i+1; j<numsSize; j++){
                if(nums[i]+nums[j]==target){
                    return i,j;
                }
            }
        }
        i++;
    }
    return 0;
}
