#include <stdio.h>
#include <stdlib.h>

 struct node{
  int data;
  struct node * link;
}; 

int main(){
	struct node *head; 
	head = (struct node *)malloc(sizeof(struct node));
	head->data = 80;
	head->link = NULL;
	printf("%d\n",head->data);
	
	struct node *current = malloc(sizeof(struct node));
	current->data = 89;
	current->link = NULL;
	head->link = current;
	printf("%d\n",head->link);
	printf("%d\n",current->data);
	
	struct node *third = malloc(sizeof(struct node));
	third->data=70;
	third->link = NULL;
	current->link = third;
	printf("%d\n",third->data);
	printf("%d",current->link);
	return 0; 
}

