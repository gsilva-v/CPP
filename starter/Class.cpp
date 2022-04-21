#include "Class.hpp"

Class::Class()
{
}

Class::Class(const Class &ref)
{
	*this = static_cast<Class>(ref);
}

Class::~Class()
{
}

Class		&Class::operator=(Class const &ref)
{
	if (this != &ref)
	{
		*this = ref;
	}
	return *this;
}