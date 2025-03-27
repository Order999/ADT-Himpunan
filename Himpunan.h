#ifndef Himpunan_h
#define Himpunan_h
#include "LinkedList.h"

void initKota();
void tambahKota(char nama[]);
bool isValidKota(char nama[]);
void tambahOrang(int i, char nama[]);
bool isValidNama(int i, char nama[]);
void tambahOrang(int i, char nama[]);
void deleteSemuaOrang(int i);
void deleteOrang(int i, char nama[]);
void deleteKota(int i);
bool isValidChoice(int i);

#endif
