#include <stdio.h> 
#include <stdlib.h> 
  
struct Node
{ 
    int data; 
    struct Node* next; 
}; 

int printList(struct Node* n) 
{ 
    while (n != NULL)
	{ 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
} 
 int main()  
{ 
    struct Node* school_code = NULL; 
    struct Node* Roll_no = NULL; 
    struct Node* Year= NULL; 
	struct Node* branch= NULL; 
   
    school_code = (struct Node*)malloc(sizeof(struct Node)); 
    Roll_no = (struct Node*)malloc(sizeof(struct Node)); 
    Year = (struct Node*)malloc(sizeof(struct Node)); 
    branch = (struct Node*)malloc(sizeof(struct Node)); 
    school_code->data = 735;
	school_code->next = Roll_no;
    Roll_no->data =13 ; 
    Roll_no->next =Year ;
    Year->data =1 ; 
    Year->next =branch ;
	branch->data =1; 
    branch->next =NULL;
    
    printList(school_code);
   return 0;
}
