//
// Created by hfwei on 2022/12/16.
//

// printf
#include <stdio.h>
#include <assert.h>
#include "ll/ll.h"

#define NUM 100

void SitAroundCircle(LinkedList *list, int num);
void KillUntilOne(LinkedList *list);
int GetSurvivor(const LinkedList *list);

int main() {
  for (int i = 1; i <= NUM; i++) {
    LinkedList list;
    Init(&list);

    SitAroundCircle(&list, i);
    // Print(&list);

    KillUntilOne(&list);
    int survivor = GetSurvivor(&list);
    printf("%d : %d\n", i, survivor);

    Free(&list);
  }

  return 0;
}

void SitAroundCircle(LinkedList *list, int num) {
  for (int i = 1; i <= num; i++) {
    Append(list, i);
  }
}

void KillUntilOne(LinkedList *list) {
  Node *node = list->head;

  while (!IsSingleton(list)) {
    Delete(list, node);
    node = node->next;
  }
}

int GetSurvivor(const LinkedList *list) {
  // assert(IsSingleton(list));

  return GetHeadVal(list);
}