#include<iostream>
#include"Item.h"
#include <map>
#include <unordered_map>

typedef std::unordered_map<std::string, Item> tipo_map;
typedef std::unordered_multimap<std::string, Item> tipo_multimap;
typedef std::pair<std::string, Item> par;

int main() {
	tipo_map usuarios;
	tipo_multimap inventario;
	tipo_multimap::iterator it_multi;
	tipo_map::iterator it;
	par usuario;
	Item* cajado = new Item;
	cajado->nome = "Cajado";
	cajado->peso = 8;
	cajado->descricao = "Forte";
	usuario.first = cajado->nome;
	usuario.second = *cajado;

	usuarios.insert(usuario);
	inventario.insert(usuario);

	/*usuario.first = "Raphael";
	usuario.second = 20;
	usuarios.insert(usuario);
	jogadores.insert(usuario);*/
	it = inventario.find("Cajado");
	std::cout << it->second.nome << " "<< it->second.peso <<" "<< it->second.descricao<< std::endl;
	/*it_multi = jogadores.find("Raphael");
	std::cout << it_multi->first << " " << it_multi->second << std::endl;*/
	std::cout << inventario.count("Cajado") << std::endl;
	system("pause");
}
