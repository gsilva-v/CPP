#include "Class.hpp"

Class::Class(std::string const &name)
{
	std::cout << "Class constructor called for "<< name << std::endl;
}

Class::Class(const Class &ref)
{
	*this = ref;
	std::cout << "Class contructor by copy" << std::endl;
}


Class::~Class()
{
	std::cout << "Destructor of Class " << " called" <<std::endl;
}

Class		&Class::operator=(Class const &ref)
{
	std::cout << "Assignation with operator= called" <<std::endl;
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hit_damage = ref._hit_damage;
		this->_energy = ref._energy;
		this->_attack = ref._attack;
	}
	return *this;
}