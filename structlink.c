#include <stdio.h>
#include <string.h>

struct node {
  int i;
  struct node *next
};

void print_list(struct node * start){
  printf("[");
  while(start){
    printf(" %d ," p -> i);
    start = start -> next;
  }
  printf("]");
}

struct node * insert_front(Struct node * location, int value){
  struct node * new = malloc(sizeof(struct node));
  new -> i = value;
  new -> next = location;
  return new;
}

struct node * free_list(struct node *){
  
}
