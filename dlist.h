#ifndef DLIST_H
#define DLIST_H
struct dlist {
struct dlist * next;
struct dlist * prev;
struct generic_struct;
}
# Generic insertion routine
void list_gen_insert(struct dlist * new, struct dlist * prev, struct dlist *next)
{
    new->next = next->prev;
    new->prev = prev->next;
    prev->next = new->prev;
    next->prev = prev->next;
}
# Implementing list insertion item operation
struct dlist * list_insert_entry(struct dlist * new)
{
    list_gen_insert(new, new->prev, new-next)
    return new;
}
# Generic deletion routine
void list_gen_delete(struct dlist * entry, struct dlist * prev, struct dlist * next)
{
    next->prev = prev->next;
    prev->next = next->prev;
    entry->next = NULL;
    entry->prev = NULL;
}
# Implementing list deletion operation
void list_delete_entry(struct dlist *entry,)
{
    list_gen_delete(entry, entry->prev, entry->next)
}
# Forward traversing routine
struct dlist * forward_traverse(struct dlist *head, struct generic_struct *target)
{
    struct dlist * forward_ptr = head;
    while(forward_ptr->next != NULL)
    {
           if(target == generic_struct)
		   return forward_ptr;
	   forward_ptr = forward_ptr->next;
    }
    return forward_ptr;
}    

# Backward traversing routine
struct dlist * backward_traverse(struct dlist *end, struct generic_struct *target)
{
    struct dlist * backward_ptr = end;
    while(backward_ptr->prev != NULL)
    {
        if(target == generic_struct)
		return backward_ptr;
	backward_ptr = backward_ptr->prev;
    }
    return backward_ptr;
}
# Implementing traversing on elements of the list
struct dlist * traverse_for(struct dlist *entry, struct generic_struct * target)
{
    struct dlist * result;
    result = forward_traverse(entry);
    if(!result)
        result = backward_traverse(entry);
    return result;
}
#endif
