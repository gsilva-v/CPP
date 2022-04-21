#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
	this->requestsList[0] = "robotomy request";
	this->requestsList[1] = "presidential request";
	this->requestsList[2] = "shruberry request";

}

Intern::Intern(const Intern &ref)
{
	*this = ref;
	std::cout << "Intern contructor by copy" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Destructor of Intern " << " called" <<std::endl;
}

Intern		&Intern::operator=(Intern const &ref)
{
	std::cout << "Assignation with operator= called" <<std::endl;
	if (this != &ref)
	{
		*this = ref;
	}
	return *this;
}
// Creators
Form *Intern::createRobotomy(std::string target){
	return (new RobotomyRequestForm (target));
}

Form *Intern::createPresidential(std::string target){
	return (new PresidentialPardonForm(target));
}

Form *Intern::createShruberry(std::string target){
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string form_type, std::string name){
	
	Form    *(Intern::*functions[4])(std::string target) = {
        &Intern::createRobotomy,
        &Intern::createPresidential,
        &Intern::createShruberry
    };

	for (int i = 0 ; i < 3; i++){
		if (this->requestsList[i].compare(form_type) == 0){
			std::cout << "Intern created " << form_type << std::endl;
			return ((this->*functions[i])(name));
		}
	}
	std::cout << "Invalid request: " << form_type << std::endl;

	return (0);
}