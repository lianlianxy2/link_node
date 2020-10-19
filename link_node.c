#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "link_node.h"

void insert_node_head(pHeadNode** pHead, struct link_node* pNode) {
	struct link_node** walk = pHead;
	pNode->next = walk;
	walk = pNode;
}

void insert_node_tail(pHeadNode** pHead, struct link_node* pNode) {

}