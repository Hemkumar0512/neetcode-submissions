/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (head == NULL)
        {
            return NULL;
        }
        
        ListNode *temp = head;
        int count = 0;
        while (temp)
        {
            temp = temp->next;
            count++;
        }

        int node = count - n;
        if (node == 0)
        {
            ListNode *temp = head;
            head = head->next;
            return head;
        }
        else
        {
            ListNode *temp = head, *prev;
            while (temp && node > 0)
            {
                prev = temp;
                temp = temp->next;
                node--;
            }
            prev->next = temp->next;
            return head;
        }
    }
};
