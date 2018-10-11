#include "structlink.h"

void print_list(struct node *start){
	printf("[");
	while (start){
		printf("%d ",start -> i);
		start = start -> next;
	}
	printf("]\n");
}

struct node *insert_front(struct node *list, int data){
	struct node *new = malloc(sizeof(struct node));
	new -> i = data;
	new -> next = list;
	return new;
}

struct node *free_list(struct node *start){
	struct node *current = start;
	while (current){
		struct node *temp = current -> next;
		free(current);
		current = temp;
	}
	return NULL;
}
