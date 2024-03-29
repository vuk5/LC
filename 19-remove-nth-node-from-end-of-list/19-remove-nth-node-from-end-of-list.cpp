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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(length==n)return head->next;
        if(length==1 and n==1)return NULL;
        temp=head;
        int d=length-n;
        for(int i=1;i<d;i++){
            temp=temp->next;
            
        }
        ListNode* dummy=temp->next;
        temp->next=temp->next->next;
        delete dummy;
        return head;
    }
};

//Another approach
// ListNode* removeNthFromEnd(ListNode* head, int n) {
// 	ListNode *fast = head, *slow = head;
// 	while(n--) fast = fast -> next;      // iterate first n nodes using fast
// 	if(!fast) return head -> next;       // if fast is already null, it means we have to delete head itself. So, just return next of head
// 	while(fast -> next)                  // iterate till fast reaches the last node of list
// 		fast = fast -> next, slow = slow -> next;            
// 	slow -> next = slow -> next -> next; // remove the nth node from last
// 	return head;
// }
