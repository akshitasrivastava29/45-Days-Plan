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
//         Node*front =head;
//         Node*itr=head;
//         while(itr!=NULL)
//         {
//             front=itr->next;
// //             make copy nodes of each original nodes and link them together,
//             Node*copy=new Node(itr->val); 
//             itr->next=copy;
//             copy->next=front;
//             itr=front;
//         }
// //         restart itr from head,
//         itr=head;
//         while(itr!=NULL)
//         {
//             if(itr->random!=NULL)
//             {
// //                 now assign random pointer for copy nodes,
//                 itr->next->random=itr->random->next;
//             }
//                 itr=itr->next->next;
            
//         }
//          itr=head; 
// //         maintain original list and also extract copy list,
//         Node*dummy=new Node(0);
//         Node*copy=dummy;
//         while(itr!=NULL)
//         {

//             front=itr->next->next;
//             copy->next=itr->next;
//             itr->next=front;
//             copy=copy->next;
//             itr=itr->next;
//         }
        
//       return dummy->next;  
        
        Node*itr=head;
        Node*front=head;
        while(itr!=NULL)
        {
            front=itr->next;
            Node*copy=new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        itr=head;
        while(itr!=NULL)
        {
            if(itr->random!=NULL)
            {
                itr->next->random=itr->random->next;
            }
            itr=itr->next->next;
        }
        itr=head;
        Node*dummy=new Node(0);
        Node*copy=dummy;
        while(itr!=NULL)
        {
            front=itr->next->next;
            copy->next=itr->next;
            itr->next=front;
            copy=copy->next;
            itr=itr->next;
        }
        return dummy->next;
    }
};