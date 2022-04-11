#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie zombie(name);
	zombie.announce();//nao é necessario criar na heap, ja que sabemos que é um unico zombie, entao criamos aqui localmente na stack,
}
