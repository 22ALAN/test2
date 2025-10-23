#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//删除一个数组中特定元素的值得到一个新的数组
int removeElement(int* nums,int numsSize,int val)
{
    int src=0;
    int dst=0;
    while(src<numsSize)
    {
        if(nums[src]!=val)
        {
            nums[dst] = nums[src];
            src++;
            dst++;
        }
        else
        {
            src++;
        }
    }
    return dst;
}

int removeDup(int* nums,int numsSize)
{
    if(numsSize==0)
    {
        return 0;
    }
    int prev = 0;
    int cur = 1;
    int dst = 0;
    while(cur<numsSize)
    {
        if(nums[prev]!=nums[cur])
        {
            nums[dst] = nums[prev];
            prev++;
            cur++;
            dst++;
        }
        else{
            ++prev;
            ++cur;
        }
    }

    nums[dst]=nums[prev];
    dst++;
    prev++;
    return dst;
}

//反转链表
struct ListNode* reverseList(struct ListNode* head)
{
    if(head==NULL|| head->next==NULL)
    {
        return head;
    }
    struct ListNode* n1 = NULL,*n2 = head,*n3 = head->next;

}