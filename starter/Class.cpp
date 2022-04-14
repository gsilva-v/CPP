#include "Class.hpp"

Class::Class()
{
	std::cout << "Class constructor called" << std::endl;
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
		*this = ref;
	}
	return *this;
}