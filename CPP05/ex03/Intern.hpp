#if !defined(INTERN_HPP)
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <map>

class Intern 
{
protected:
	std::string requestsList[3];
	Form *createRobotomy(std::string target);
	Form *createPresidential(std::string target);
	Form *createShruberry(std::string target);

public:
	Intern();
	Intern(const Intern &ref);
	Intern	&operator=(Intern const &ref);
	~Intern();
	// Functions
	Form *makeForm(std::string form_type, std::string name);
};

#endif