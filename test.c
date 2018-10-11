#include <stdlib.h>
#include <stdio.h>
#include "structlink.h"

int main(){
	struct node *list = malloc(sizeof(struct node));
	list -> i = 2;
	list -> next = NULL;
	list = insert_front(list,-3);
	print_list(list);
	list = insert_front(list,2);
	print_list(list);
	list = free_list(list);
	printf("after free the list is now %s\n",(char*)list);
	return 0;
}
