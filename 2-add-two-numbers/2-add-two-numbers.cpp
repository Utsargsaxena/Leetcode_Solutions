class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1, *head2=l2;
        int c1=0, c2=0;
        int extra=0, temp;
        while(l1!=nullptr && l2!=nullptr){
            //cout<<extra<<endl;
            //cout<<extra<<" "<<l1->val<<endl;
            temp = extra + l1->val + l2->val;
            l1->val = temp%10;
            l2->val = temp%10;
            extra =  temp/10;
            
            if(extra == 1 && l1->next == nullptr && l2->next == nullptr) {
                ListNode* lastNode = new ListNode(0);
                l1->next = lastNode;
            }
            l1=l1->next;
            l2=l2->next;
            c1++;
            c2++;
        }
        //cout<<l1->val<<" "<<l2->val<<endl;
        while(l1!=nullptr){
            //cout<<extra<<endl;
            temp = extra+l1->val;
            l1->val = temp%10;
            extra =  temp/10;
            if(extra == 1 && l1->next == nullptr) {
                ListNode* lastNode = new ListNode(0);
                l1->next = lastNode;
            }
            l1=l1->next;
            c1++;
        }
        while(l2!=nullptr){
            //cout<<extra<<endl;
            temp = extra+l2->val;
            l2->val = temp%10;
            extra =  temp/10;
            if(extra == 1 && l2->next == nullptr) {
                ListNode* lastNode = new ListNode(0);
                l2->next = lastNode;
            }
            l2=l2->next;
            c2++;
        }
        //cout<<c1<<" "<<c2<<endl;
        return (c1>=c2) ? head1 : head2;
    }
};