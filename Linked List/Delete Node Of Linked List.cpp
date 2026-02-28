/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    // Write your code here
    if(list == NULL || list->next == NULL) return NULL;
    Node* temp = list;

     // Atleast 4 elements there in total
    while(temp->next->next != NULL){
        temp = temp -> next;
    }
    //Free the last element
    delete temp->next;

    // We reached 2nd last element
    temp -> next = nullptr; // Assign the 2nd last element next as nullptr

    return list;
}
