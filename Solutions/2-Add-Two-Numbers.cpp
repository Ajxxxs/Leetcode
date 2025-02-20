class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        int cary = 0;
        ListNode* res = new ListNode();
        ListNode* curr = res;

        while(l1!=NULL || l2!=NULL){
            sum = cary;
            if(l1!=NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            
            cary = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
        }

        if(cary>0){
            curr->next = new ListNode(cary);
        }

    return res->next;
    }
};