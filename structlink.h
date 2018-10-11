#include <stdio.h>
#include <stdlib.h>

struct node{ 
	int i; 
	struct node *next; 
};

void print_list(struct node *start);
struct node *insert_front(struct node *list, int data);
struct node *free_list(struct node *start);
