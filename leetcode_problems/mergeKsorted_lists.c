#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * mergeKLists- merge k sorted lists into one sorted list
 * @lists: array of pointers to the head of the lists
 * @listsSize: number of lists
 * Return: pointer to the head of the merged list
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize)
{
	struct ListNode *head = NULL;
	struct ListNode *tail = NULL;
	struct ListNode *min = NULL;
	int i, min_index;
	
	while (1)
	{
		min = NULL;
		min_index = -1;
		for (i = 0; i < listsSize; i++)
		{
			if (lists[i] == NULL)
			{
                continue;
			}
			if (min == NULL || lists[i]->val < min->val)
			{
				min = lists[i];
				min_index = i;
			}
		}
		if (min_index == -1)
		{
			break;
		}
		if (head == NULL)
		{
			head = min;
			tail = min;
		}
		else
		{
			tail->next = min;
			tail = min;
		}
		lists[min_index] = lists[min_index]->next;
	}
	return (head);
}
