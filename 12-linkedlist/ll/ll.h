//
// Created by hfwei on 2022/12/17.
//

#ifndef INC_2022_CPL_CODING_1_12_LINKEDLIST_LL_LL_H_
#define INC_2022_CPL_CODING_1_12_LINKEDLIST_LL_LL_H_
// adding code below

#include <stdbool.h>

typedef struct node {
  int val;
  struct node *next;
} Node;

typedef struct ll {
  Node *head;
  Node *tail;
} LinkedList;

void Init(LinkedList *list);

bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);

/**
 * @brief Return -1 if list is empty.
 * @param list
 * @return
 */
int GetHeadVal(const LinkedList *list);
Node *Search(const LinkedList *list, int val);

void Print(const LinkedList *list);

void Append(LinkedList *list, int val);
void Insert(LinkedList *list, Node *prev, int val);

/**
 * @brief Delete the node next to prev from the linked list.
 * @param list
 * @param prev
 */
void Delete(LinkedList *list, Node *prev);


void Free(LinkedList *list);

#endif //INC_2022_CPL_CODING_1_12_LINKEDLIST_LL_LL_H_