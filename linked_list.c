/* create a singly linked list */

#include<stdio.h> 
#include<stdlib.h>

typedef struct linked_list {

	int 	data;
	struct	linked_list *next;
}list;

void add_node(list **head, int data);
void print_list(list *head);

int main(void)
{
	list *head;
	int i=1;
	head = (list*)malloc(sizeof(list));
	head->data = 0;
	head->next = NULL;
	if(head==NULL)
		printf("linked list creation failed\n");
	for(i=1; i<5; i++)
		add_node(&head, i);
	print_list(head);	
	return 0;
}

void add_node(list **head, int data)
{
	list **ptr;
	ptr=head;
	(*ptr)->next = (list *)malloc(sizeof(list));
	(*ptr)=(*ptr)->next;
	(*ptr)->data = data;
	printf("%d\n", (*ptr)->data);
}	

void print_list(list *head)
{
	while(head!=NULL){
		printf("%d\n", head->data);
		head = head->next;
	}
}


