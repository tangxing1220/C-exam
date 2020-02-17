#include <stdbool.h>
#include <stdio.h>

bool checkPossibility(int* nums, int numsSize){
    int flag;
    int i;
    
    i = 0;
    flag = 0;    
    if (numsSize == 2)
        return true;
    while(i < numsSize - 1)
    {
        if (nums[i] > nums[i+1])
        {
            if(flag == 0)
                flag = 1;
            else 
                return false;
            if (i == 0)
                 if (!(nums[i] <= nums[i + 2]) && !(nums[i + 1] <= nums[i + 2]))
                    return false; 
            else if (i == numsSize - 2)
                if (!(nums[i - 1] <= nums[i]) && !(nums[i - 1] <= nums[i + 1]))
                    return false;
            else
               if (!((nums[i - 1] <= nums[i]) && (nums[i] <= nums[i + 2])) &&
                !((nums[i - 1] <= nums[i + 1]) && (nums[i + 1] <= nums[i + 2])))
                    return false;
        }
        i++;
    }
    return true;
}

int main(void)
{
    bool result;
    int arr[4] = {2,4,3,6};
    int size;

    size = 4;
    result = checkPossibility(arr, size);
    if (result)
        printf("Yes");
    else
        printf("No");
    return (0);
}