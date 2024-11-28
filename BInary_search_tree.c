// #include<stdio.h>
// #include<malloc.h>

// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n; // creating a node pointer
//     n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
//     n->data = data; // Setting the data
//     n->left = NULL; // Setting the left and right children to NULL
//     n->right = NULL; // Setting the left and right children to NULL
//     return n; // Finally returning the created node
// }

// struct node * search(struct node* root, int key){
//     if(root==NULL){
//         return NULL;
//     }
//     if(key==root->data){
//         return root;
//     }
//     else if(key<root->data){
//         return search(root->left, key);
//     }
//     else{
//         return search(root->right, key);
//     }
// }

// int main(){
     
//     // Constructing the root node - Using Function (Recommended)
//     struct node *p = createNode(5);
//     struct node *p1 = createNode(3);
//     struct node *p2 = createNode(6);
//     struct node *p3 = createNode(1);
//     struct node *p4 = createNode(4);
//     // Finally The tree looks like this:
//     //      5
//     //     / \
//     //    3   6
//     //   / \
//     //  1   4  

//     // Linking the root node with left and right children
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     int num;
//     printf("Enter the element to be searched ");
//     scanf("%d",&num);

//     struct node* n = search(p, num);
//     if(n!=NULL){
//     printf("Found: %d", n->data);
//     }
//     else{
//         printf("Element not found");
//     }
//     return 0;
// }


//------------> Searching in BST : 
// #include <stdio.h>
// #include <malloc.h>

// struct node{

//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createnode(int data)
// {
//     struct node *n;
//     n = (struct node*) malloc(sizeof(struct node));
//     n->data = data;
//     n->left = NULL;
//     n->right = NULL;
// }

// struct node* search(struct node* root, int key)
// {
//     if(key==NULL)
//     {
//         return NULL;
//     }
//     else if(key==root)
//     {
//         return root;
//     }
//     else if(key<root->data)
//     {
//         return search(root->left,key);
//     }
//     else if(key>root->right)
//     {
//         return search(root->right,key);
//     }
// }

// int main()
// {
//     // Creating the nodes of the BSt tree : 
//     struct node *p  = createnode(5);
//     struct node *p1 = createnode(3);
//     struct node *p2 = createnode(6);
//     struct node *p3 = createnode(2);
//     struct node *p4 = cretenode(1);

//     // Linking the nodes : 
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     int key;
//     printf("Enter key : ");
//     scanf("%d",&key);

//     struct node *n = search(p,key);

//     if(n==NULL)
//     {
//         printf("Element not found ");
//     }
//     else{
//         printf("Element found : %d",n->data);
//     }
        
//     return 0;
// }


// ---------------> insertion in BST :

#include <stdio.h>
#include <malloc.h>

struct node{

    int data;
    struct node* left;
    struct node* right;
};

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
          }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }
}


int main()
{
    struct node* p = createnode(5);
    struct node* p1 = createnode(6);
    struct node* p2 = createnode(3);
    struct node* p3 = createnode(2);
    

    insert()

    return 0;
}

































