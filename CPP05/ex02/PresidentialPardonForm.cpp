#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 5 , 25)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref): Form(ref.getName(), 5 , 25)
{
	*this = ref;
	std::cout << "PresidentialPardonForm contructor by copy" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm " << " called" <<std::endl;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	std::cout << "Assignation with operator= called" <<std::endl;
	if (this != &ref)
	{
		*this = ref;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() >= this->getGradeExec())
		throw PresidentialPardonForm::Form::GradeTooLowException();
	std::cout << "Informs that " << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
