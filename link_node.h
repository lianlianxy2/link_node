#ifndef __LINK__NODE__H
#define __LINK__NODE__H

struct link_node {
	struct link_node* next;
};
typedef struct link_node* pHeadNode;

void insert_node_head(pHeadNode** head,struct link_node* pNode); 
void insert_node_tail(pHeadNode** head, struct link_node* pNode);

#endif // !__LINK__NODE__H