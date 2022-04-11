#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name) 
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called for "<< name << std::endl;
	_name = name;
	this->_name = name;
	this->_attack = FragTrap::_attack;
	this->_hit_damage = FragTrap::_hit_damage;
	this->_energy = ScavTrap::_energy;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) : ScavTrap(ref._name), FragTrap(ref._name)
{
	*this = ref;
	std::cout << "DiamondTrap contructor by copy" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap " << " called" <<std::endl;
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &ref)
{
	if (this != &ref){

	}
	std::cout << "DiamonTrap 'operator=' called" << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}


void DiamondTrap::whoAmI()const {
	std::cout << "i am "  << std::endl;
}

