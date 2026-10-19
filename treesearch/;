#include <search.h>
#include <stdio.h>
#include <string.h>
struct node {
char *name;
int age;
};
#define TABLESIZE 50
char nametable[TABLESIZE*20]; /*
*/
struct node nodetable[TABLESIZE]; /* */
struct node *root = NULL; /* */
int compare(const void *cp1, const void *cp2)
{
return strcmp(((struct node *)cp1)->name, ((struct node *)cp2)->name);
}
void print_node(const void *, VISIT, int){
	if (order == preorder || order == leaf)
		printf(" = %-20s, = %d\n",(*(struct node **)nodeptr)->name,(*(struct node **)nodeptr)->age);
};
int main(){

	char *nameptr = nametable;
	struct node *nodeptr = nodetable;
	struct node **ret;
	int i = 0;
	
	while (scanf("%s%d", nameptr, &nodeptr->age) != EOF && i++ < TABLESIZE) {
		nodeptr->name = nameptr;
	
	ret = (struct node **) tsearch((void *) nodeptr,(void **) &root, compare);
	printf("\"%s\" ", (*ret)->name);
	
	if (*ret == nodeptr)
		printf(" .\n");
	else
		printf(" .\n");
	
	nameptr += strlen(nameptr) + 1;
	nodeptr++;
}

twalk((void *) root, print_node);
}
