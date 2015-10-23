#ifndef __DBLink__
#define __DBLink__

typedef struct node_t {
	node_t *next;	
};

typedef struct {
	node_t *head;
}cList_t;

void createCList(cList_t *list);
void freeCList(cList_t *list);
node_t * pop(cList_t *list);
void push(cList_t *list, node_t *node);
void remove(node_t *prev, node_t *node);
void insert(node_t *prev, node_t *node);
int size(cList_t *list);
 





typedef struct dblNode {
	dblNode *preNode;
	dblNode *nextNode;
} dblNode_t;

typedef struct {
	dblNode_t *headNode;
	dblNode_t *lastNode;
} dblLinkList_t;

void createDblList(dblLinkList_t *);
void append(dblLinkList_t *,dblNode_t *);
void insert(dblNode_t *,dblNode_t *);
void remove(dblNode_t *);
void push(dblLinkList_t *,dblNode_t *);
void removeFirst(dblLinkList_t *);
void removeLast(dblLinkList_t *);
void len(dblLinkList_t *);

#endif 
