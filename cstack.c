#include <stdio.h>
//Samet Enes Örsdemir


struct StackNode {
	int data;
	struct StackNode *next;
};
typedef struct StackNode StackNode;
typedef StackNode * StackNodePtr;




void printstack(StackNodePtr currentptr){
	
	if(currentptr == NULL){
		puts("The stack is empty.\n");
	}
	else{
		puts("The stack is:");
		
		while(currentptr != NULL){
			printf("%d --> ",currentptr->data);
			currentptr = currentptr ->next;
		}
		puts("NULL\n");
		
	}
}


void Push (StackNodePtr *TopPtr, int info) {
	

	StackNodePtr newptr = malloc(sizeof(StackNode));
	
	
	if(newptr != NULL){
		newptr -> data = info;
		newptr->next= *TopPtr;
		*TopPtr = newptr;
	}
	else{
		printf("No memory available.\n");
	}
	
}
	

void pop(StackNodePtr *TopPtr) {
	StackNodePtr TempPtr;
	TempPtr= *TopPtr;
	*TopPtr = (*TopPtr)->next;
	free(TempPtr); 
}


int main(void){
	StackNodePtr top = NULL;


	int q = 2;
	int d = 9;
	int f = 5366;
	int r = -454;
	int u = 34;
	Push(&top,q);
	printstack(top);
	Push(&top,d);
	printstack(top);
	Push(&top,f);
	printstack(top);
	pop(&top);
	printstack(top);
	pop(&top);
	printstack(top);
	Push(&top,r);
	printstack(top);
	Push(&top,u);
	printstack(top);
	
	
	
	
}
