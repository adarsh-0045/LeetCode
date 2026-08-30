// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(head==nullptr) return nullptr;
//         if(left==right) return head;
//         ListNode* t=head;
//         ListNode* before=nullptr;
//         int pos=1;
//             if(pos<left){
//                 before=t;
//                 t=t->next;
//                 pos++;
//             }
//         ListNode* curr=t;
//         ListNode* prev=nullptr;
//         int times=right-left+1;
//         while(times--){
//             ListNode* nex=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nex;
//         }
//         t->next=curr;
//         if(before!=nullptr){
//             before->next=prev;
//             return head;
//         }
//         return prev;
//     }
// };
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head == nullptr) return nullptr;
        if(left == right) return head;

        ListNode* t = head;
        ListNode* before = nullptr;

        int pos = 1;

        // Move to the LEFT position
        while(pos < left) {
            before = t;
            t = t->next;
            pos++;
        }

        // t is now at position LEFT
        ListNode* curr = t;
        ListNode* prev = nullptr;

        int times = right - left + 1;

        // Reverse from LEFT to RIGHT
        while(times--) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        // Connect reversed part with remaining list
        t->next = curr;

        if(before != nullptr) {
            before->next = prev;
            return head;
        }

        return prev;
    }
};