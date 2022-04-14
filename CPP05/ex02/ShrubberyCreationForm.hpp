#if !defined(SHRUBBERTCREATIONFORM_HPP)
# define SHRUBBERTCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
protected:

public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm &ref);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &ref);
	~ShrubberyCreationForm();
	virtual	void execute(Bureaucrat const & executor) const;
};

#endif
