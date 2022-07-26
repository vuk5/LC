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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        temp=head;
        int ans=0;
        while(length){
            ans+=pow(2,length-1)*temp->val;
            temp=temp->next;
            length--;
            
        }
        return ans;
    }
};