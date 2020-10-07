#include "list.h"

int remove_last(node * & head)
{
    int count = 0;
    if (!head) return 0;
    if (!head->next)
    {
        delete head;
        head = NULL;
        return 1;
    }
    // int cout  = 1;
    ++count;
    count += remove_last(head->next);
    return count;

    // return remove_last(head->next) + 1;
    // the above code  would  replace the 3
    // lines above it.
}

// Wrapper function - sets up the stage for recursion to take place
int find_largest(node * head)
{
    return find_largest(head, -100);
}

// Find and return the largest item in a LLL
int find_largest(node * head, int largest)
{
    if (!head) return largest;
    if (largest < head->data)
        largest = head->data;
    return find_largest(head->next, largest);
}

// Remove the largest value in a LLL
it remove_largest(node * & head, int largest)
{
    if (!head) return largest;
    if (largest < head->data)
        largest = head->data;
    largest = remove_largest(head->next, largest);
    if (head->data == largest)
    {
        node * temp = head->next;
        delete head;
        head = temp;
    }
    return largest;
}

