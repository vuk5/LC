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
    ListNode* reverseList(ListNode* head) {
        // ListNode* newnode=head;
        //  ListNode* prev=NULL;
        //  ListNode* cur=head;
        // while(newnode)
        // {
        //  newnode=newnode->next;
        //     cur->next=prev;
        //     prev=cur;
        //     cur=newnode;
        // }        
        // return prev;
        if(!head or !(head->next))return head;
        ListNode* temp=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
        
    }
};