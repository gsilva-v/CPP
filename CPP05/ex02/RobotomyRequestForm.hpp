#if !defined(ROBOTOMYREQUESTFORM_HPP)
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
protected:

public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &ref);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &ref);
	~RobotomyRequestForm();
	virtual	void execute(Bureaucrat const & executor) const;

};


#endif