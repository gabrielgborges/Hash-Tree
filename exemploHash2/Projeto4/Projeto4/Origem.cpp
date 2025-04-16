#include "HashTable.h"

unsigned long int funcaoHash(int) {
	return 1;
}

void main(){
	HashTable<int, int> *ht_hash_table = new HashTable<int, int>(10, funcaoHash);
	system("pause");
}