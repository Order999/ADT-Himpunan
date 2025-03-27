#ifndef Linkedlist_h
#define Linkedlist_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define info(P) (P)->info
#define next(P) (P)->next
#define nama(P) (P)->nama
#define orang(P) (P)->orang
#define Nil NULL
#define PANJANG 7

typedef char infotype[10];
typedef struct tElmtlist* address;
typedef struct tElmtlist {
    infotype info;
    address next;
} ElmtList;

typedef struct Kota* unit;
typedef struct Kota{
	char nama[10];
	address orang;
}Kota;

unit kota[PANJANG];

void insertFirst(address* First, int value);
void insertLast(address* First, infotype nama);
void insertAfter(address *First, int value);
void deleteFirst(address* First);
void deleteLast(address *First);
void deleteByValue(address *First, int value);
void printSemuaNode(address First);


#endif


