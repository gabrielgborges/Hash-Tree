#pragma once
#include <vector>
#include <list>
#include "HashEntry.h"
template <class KeyType, class DataType>
class HashTable
{
public:
	HashTable();
	HashTable(int tamanho, unsigned long int(*hash_f)(KeyType))
	~HashTable();
	unsigned long int(*hash_func)(KeyType);
	std::vector<list<HashEntry<KeyType,DataType>>> tabela_hash
};
template<class KeyType, class DataType>
HashTable<KeyType, DataType>::HashTable(int tamanho, unsigned long int(*hash_f)(KeyType)) {
	hash_func = hash_f;
}
