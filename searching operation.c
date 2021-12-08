#include<stdio.h>
int main()
{
    int n = 10,item = 5,i;
    int nums[10] = {1,3,4,5,8,15,6,2,11,25};
    for(int i=0; i<n; i++)
        printf("%d ",nums[i]);
    for(i=0; i<n; i++)
    {
        if(nums[i]==item)
        {
            break;
        }
    }
    printf("Found element %d at position %d\n",item,i+1);
    return 0;
}
