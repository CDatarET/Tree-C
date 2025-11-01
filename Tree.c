/*
    Authored by Chaitanya Datar
    Panel F8
    1262242226
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *left;
    struct node *right;
};

void preorder(struct node *root){
    if(root == NULL){
        return;
    }

    printf("%d ", root->val);
    preorder(root->left);
    preorder(root->right);
}


void inorder(struct node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    printf("%d ", root->val);
    inorder(root->right);
}

void postorder(struct node *root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->val);
}

void add(struct node *root){
    struct node *temp = root;
    printf("current parent is value %d\n", root->val);
    if(root->left == NULL){
        printf("the left node is null\n");
    }
    else{
        printf("the left node has a value of %d\n", root->left->val);
    }

    if(root->right == NULL){
        printf("the right node is null\n");
    }
    else{
        printf("the right node has a value of %d\n", root->right->val);
    }

    printf("1 to go left, 2 to go right: ");
    int lr;
    scanf("%d", &lr);

    if(lr == 1){
        if(temp->left == NULL){
            temp->left = (struct node *)malloc(sizeof(struct node));
            temp->left->right = NULL;
            temp->left->left = NULL;
            printf("enter value: ");
            scanf("%d", &temp->left->val);
        }
        else{
            add(temp->left);
        }
    }
    else{
        if(temp->right == NULL){
            temp->right = (struct node *)malloc(sizeof(struct node)); 
            temp->right->right = NULL;
            temp->right->left = NULL;
            printf("enter value: ");
            scanf("%d", &temp->right->val);
        }
        else{
            add(temp->right);
        }
    }
}

void init(struct node *root){
    printf("Enter the integer value you want to initialize at root: ");
    scanf("%d", &root->val);
}

int main(){
    struct node *root;
    root = (struct node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    init(root);

    char yn = 'y';

    while(yn == 'y'){
        printf("Enter Operation- \n");
        printf("1 for adding a node\n");
        printf("2 for preorder traversal (recursion)\n");
        printf("3 for inorder traversal (recursion)\n");
        printf("4 for postorder traversal (recursion)\n");
        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1:
                add(root);
                break;
            
            case 2:
                preorder(root);
                printf("\n");
                break;
            
            case 3:
                inorder(root);
                printf("\n");
                break;
            
            case 4:
                postorder(root);
                printf("\n");
        }

        printf("another operation? y/n");
        scanf(" %c", &yn);
    }
}/*
    Authored by Chaitanya Datar
    Panel F8
    1262242226
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *left;
    struct node *right;
};

void preorder(struct node *root){
    if(root == NULL){
        return;
    }

    printf("%d ", root->val);
    preorder(root->left);
    preorder(root->right);
}


void inorder(struct node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    printf("%d ", root->val);
    inorder(root->right);
}

void postorder(struct node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    inorder(root->right);
    printf("%d ", root->val);
}

void add(struct node *root){
    struct node *temp = root;
    printf("current parent is value %d\n", root->val);
    if(root->left == NULL){
        printf("the left node is null\n");
    }
    else{
        printf("the left node has a value of %d\n", root->left->val);
    }

    if(root->right == NULL){
        printf("the right node is null\n");
    }
    else{
        printf("the right node has a value of %d\n", root->right->val);
    }

    printf("1 to go left, 2 to go right: ");
    int lr;
    scanf("%d", &lr);

    if(lr == 1){
        if(temp->left == NULL){
            temp->left = (struct node *)malloc(sizeof(struct node));
            temp->left->right = NULL;
            temp->left->left = NULL;
            printf("enter value: ");
            scanf("%d", &temp->left->val);
        }
        else{
            add(temp->left);
        }
    }
    else{
        if(temp->right == NULL){
            temp->right = (struct node *)malloc(sizeof(struct node)); 
            temp->right->right = NULL;
            temp->right->left = NULL;
            printf("enter value: ");
            scanf("%d", &temp->right->val);
        }
        else{
            add(temp->right);
        }
    }
}

void init(struct node *root){
    printf("Enter the integer value you want to initialize at root: ");
    scanf("%d", &root->val);
}

int main(){
    struct node *root;
    root = (struct node*)malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;
    init(root);

    char yn = 'y';

    while(yn == 'y'){
        printf("Enter Operation- \n");
        printf("1 for adding a node\n");
        printf("2 for preorder traversal (recursion)\n");
        printf("3 for inorder traversal (recursion)\n");
        printf("4 for postorder traversal (recursion)\n");
        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1:
                add(root);
                break;
            
            case 2:
                preorder(root);
                printf("\n");
                break;
            
            case 3:
                inorder(root);
                printf("\n");
                break;
            
            case 4:
                postorder(root);
                printf("\n");
        }

        printf("another operation? y/n");
        scanf(" %c", &yn);
    }
}
