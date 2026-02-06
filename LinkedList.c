#include <stdio.h>
struct LinkedList* initializeList() {
    struct LinkedList* list = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    if (list == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

void insert(struct LinkedList* list, int data, int position) {
     if(position < 0 || position > list -> size)
	{
		printf("Invalid position\n");
		return;
	}
	struct Node* newNode = createNode(data);
	if(position == 0)
	{
		newNode -> next = list -> head;
		list -> head = newNode;
	}
	else {
		struct Node* temp = list -> head;
		for(int i = 0; i < position - 1; i++)
			temp = temp -> next;
		newNode -> next = temp -> next;
		temp -> next = newNode;
	}
	list -> size++;
	printf("Element %d inserted at position %d\n", data, position);
}
void deleteNode(struct LinkedList* list, int position) {
    if(position < 0 || position >= list -> size)
	{
		printf("Invalid position\n");
		return;
	}
	struct Node* temp = list -> head;
	if(position == 0)
	{
		list -> head = temp -> next;
		free(temp);
	}
	else{
		struct Node* prev = NULL;
		for(int i = 0; i < position; i++)
			{
				prev = temp;
				temp = temp -> next;
			}
		prev -> next = temp -> next;
		free(temp);
	}
	list -> size --;
	printf("Element at position %d deleted\n", position);
    
}
void reverse(struct LinkedList* list) {
    struct Node* prev = NULL;
	struct Node* current = list->head;
	struct Node* next = NULL;
	while (current != NULL) 

		{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	list -> head = prev;
    
    
    
}
void display(struct LinkedList* list) {
    struct Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void displayReversed(struct LinkedList* list) {
    struct Node* current = list->head;
