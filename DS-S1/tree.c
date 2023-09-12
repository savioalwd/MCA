#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *root = NULL;
node *alloc_node(int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

node *insert(node *head, int data)
{

    if (head == NULL)
    {
        head = alloc_node(data);
    }
    else
    {
        if (data < head->data)
        {
            head->left = insert(head->left, data);
        }
        else if (data > head->data)
        {
            head->right = insert(head->right, data);
        }
    }
    return head;
}

void search(node *root, int data, int level)
{
    level++;
    if (root == NULL)
    {
        printf("\n-- Element not found! --\n");
    }
    else if (root->data == data)
    {
        printf("Element found! at level : %d", level);
    }
    else if (data < root->data)
    {
        search(root->left, data, level);
    }
    else
    {
        search(root->right, data, level);
    }
}

void inoder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inoder(root->left);
        printf("%d\t", root->data);
        inoder(root->right);
    }
}

void preoder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d\t", root->data);
        inoder(root->left);
        inoder(root->right);
    }
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inoder(root->left);
        inoder(root->right);
        printf("%d\t", root->data);
    }
}

node *inoderPredecessor(node *root)
{
    // leftsubtree ka right most child.
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

node *minValue(node *root)
{
    while (root && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
node *delete(node *root, int data)
{

    if (root == NULL)
    {
        return NULL;
    }
    else if (data < root->data)
    {
        root->left = delete (root->left, data);
    }
    else if (root->data > data)
    {
        root->right = delete (root->right, data);
    }
    else
    {
        node *temp = NULL;
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        else if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = minValue(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
}

void main()
{
    int opt = 1;
    int temp;
    while (opt)
    {
        printf("\n\n...................\n");
        printf("1) INSERT\n");
        printf("2) DELETE\n");
        printf("3) INNORDER\n");
        printf("4) PREORDER\n");
        printf("5) POSTORDER\n");
        printf("6) SEARCH\n");
        printf("0) QUIET\n\n");
        printf("choose your option : ");
        scanf("%d", &opt);
        printf("\n\n...................\n");

        switch (opt)
        {
        case 1:
            printf("Enter new node data \t");
            scanf("%d", &temp);
            root = insert(root, temp);
            break;
        case 2:
            printf("Enter node value to be deleted \t");
            scanf("%d", &temp);
            delete (root, temp);
            break;
        case 3:
            inoder(root);
            break;
        case 4:
            preoder(root);
            break;
        case 5:
            postorder(root);
            break;
        case 6:
            printf("Enter the element to find? \t");
            scanf("%d", &temp);
            search(root, temp, 0);
            break;
        default:
            printf("Invalid option! Try Again.");
        }
    }
}