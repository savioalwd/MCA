#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *prev, *next;
} link;

link *root = NULL;
link *end = NULL;
link *temp = NULL;

link *alloc_node(int data)
{
    link *temp = (link *)malloc(sizeof(link));
    temp->data = data;
    temp->prev = temp->next = NULL;
    return temp;
}

void insert_head(int data)
{
    if (root == NULL)
    {
        end = root = alloc_node(data);
    }
    else
    {
        link *temp = alloc_node(data);
        temp->next = root;
        root->prev = temp;
        root = temp;
    }
    return root;
}
void insert_rev(int data)
{
    if (end == NULL)
    {
        end = root = alloc_node(data);
    }
    else
    {
        temp = alloc_node(data);
        temp->prev = end;
        end->next = temp;
        end = temp;
    }
}
void display_forward()
{
    temp = root;
    if (temp == NULL)
        return;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void display_reverse()
{
    temp = end;
    if (temp == NULL)
        return;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->prev;
    }
}

void insert_pos(int data, int pos)
{
    int i = 0;
    temp = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    temp = root;
    if (pos < i)
    {
        for (i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
    }
    else
    {
        printf("invalid position. pos start from 0");
    }
    link *newNode = alloc_node(data);
    newNode->next = temp->prev->next;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
}
void delete_head()
{
    if (root == NULL)
    {
        printf("empty");
    }
    else
    {
        temp = root;
        root = root->next;
        printf("%d is deleted", temp->data);
        free(temp);
    }
}
void delete_end()
{
    if (end == NULL)
    {
        printf("empty");
    }
    else
    {
        printf("%d is deleted", end->data);
        temp = end;
        end = end->prev;
        end->next = NULL;
        free(temp);
    }
}
void delete_pos(int pos)
{
    int i = 0;
    temp = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    temp = root;
    if (pos < i)
    {
        for (i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
    }
    else
    {
        printf("enter valid pos");
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}
void search(int data)
{
    temp = root;
    if (root == NULL)
    {
        printf("empty");
    }
    else
    {
        int i = 0;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                printf("element found at = %d", i);
                break;
            }
            else
            {
                temp = temp->next;
                i++;
            }
        }
    }
}
void main()
{
    int ch = 1, data, pos;

    while (ch)
    {
        printf("\nChoose:\n1. Insert head\n2. Insert end\n3. Insert at particular position\n4. Delete head\n5. Delete end\n6. Delete from particular position\n7. Display Forward\n8. Display Reverse\n9. Search\n0. End \n::");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data you need to store: ");
            scanf("%d", &data);
            insert_head(data);
            break;
        case 2:
            printf("Enter the data you need to store: ");
            scanf("%d", &data);
            insert_rev(data);
            break;
        case 3:
            printf("Enter the position you need to store: ");
            scanf("%d", &pos);
            printf("Enter the data you need to store: ");
            scanf("%d", &data);
            insert_pos(data, pos);
            break;
        case 4:
            delete_head();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            printf("Enter the position you need to delete: ");
            scanf("%d", &pos);
            delete_pos(pos);
        case 7:
            display_forward();
            break;
        case 8:
            display_reverse();
            break;
        case 9:
            printf("Enter the element you want to delete");
            scanf("%d", &data);
            search(data);
        case 0:
            printf("Program exited.");
            break;
        default:
            printf("please retry");
        }
    }
    return;
}