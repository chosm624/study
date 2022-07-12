#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int LData;

typedef struct __ARRAY_LIST_H__
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List*plist);
void LInsert(List*plist,LData data);

int LFirst(List*plist, LData*pdata);
int LNext(List*plist,Ldata*pdata);

LData LRemove(List*Plist);
int Lcount(List*pliet);

#endif