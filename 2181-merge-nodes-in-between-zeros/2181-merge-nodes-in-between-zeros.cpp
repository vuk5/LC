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
    ListNode* mergeNodes(ListNode* head) {
        // head=head->next;
        ListNode* temp=head->next;
        ListNode* prev=head;
        int sum=0;
         while(temp){
             if(temp->val!=0){
                 prev->val+=temp->val;
             }
             else{
                 if(temp->next==NULL)
                     prev->next=NULL;
                 else
                     prev->next=temp;
                 prev=temp;
             }
             temp=temp->next;
         }
        return head;
    }
};