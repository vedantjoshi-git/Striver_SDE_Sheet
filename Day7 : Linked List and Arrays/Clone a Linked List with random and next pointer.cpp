/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *p = head;
        Node *next = head;
        while(p != 0)
        {
            next = p->next;
            Node *d = new Node(p->val);
            p->next = d;
            d->next = next;
            p = next;
        }

        Node *ite;
        ite = head;

        while(ite != NULL)
        {
            if(ite->random != NULL)
            ite->next->random = ite->random->next;
            ite = ite->next->next;
        }

        ite = head;
        Node *first = new Node(0);
        Node *copy, *copyite = first;


        while(ite != NULL)
        {
           next = ite->next->next;

           copy = ite->next;
           copyite->next = copy;
           copyite = copy;

           ite->next = next;
           ite = next;
        } 

        return first->next;
    }
};
