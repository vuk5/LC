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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        if(l1->val > l2->val)swap(l1,l2);
        ListNode* head=l1;
        while(l1!=NULL and l2!=NULL){
            ListNode* temp=NULL;
            while(l1!=NULL  and l1->val <=l2->val){
                temp=l1; //temp is used to keep track of smallest previous node
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);  //l1 is always points to small value node
            
        }
        return head;
        
    }
};