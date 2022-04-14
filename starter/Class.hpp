#if !defined(CLASS_HPP)
# define CLASS_HPP

#include <iostream>

class Class 
{
protected:

public:
	Class();
	Class(const Class &ref);
	Class	&operator=(Class const &ref);
	~Class();
};

#endif