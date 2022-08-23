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
    bool isPalindrome(ListNode* head) {
//         vector<int> v;int flag=0;
//         while(head!=NULL){
//             v.push_back(head->val);
//             head=head->next;
//         }
//         int i=0;int j=v.size()-1;
//         if(v.size()<=1)return true;
//         while(i<j){
//             if(v[i]==v[j]){
//                 i++;j--;
//                 flag=1;
                
//             }
//             else{ flag=0;break;}
//         }
//         if(flag==1)return true;
//         else return false;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode*cur=slow->next;
        ListNode*nextnode=slow->next;
        while(nextnode){
            nextnode=nextnode->next;
            cur->next=prev;
            prev=cur;
            cur=nextnode;
        }
        slow->next=prev;
        slow=slow->next;
        while(slow)
        {
            if(head->val !=slow->val)return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
       
        
    }
};