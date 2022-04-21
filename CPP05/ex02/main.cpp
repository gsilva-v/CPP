#include  <iostream>
#include  "Bureaucrat.hpp"
#include  "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void){

	try
	{
		ShrubberyCreationForm berry("teste");
		Bureaucrat rapaz("rapaz", 13);
		/* code */
		berry.execute(rapaz);
	}
	catch( std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		PresidentialPardonForm pres("menino");
		Bureaucrat rapaz("rapaz", 1);
		pres.execute(rapaz);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	try
	{
		RobotomyRequestForm robo("furo");
		Bureaucrat rapaz("rapaz", 1);
		robo.execute(rapaz);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	PresidentialPardonForm pres("menino");
	Bureaucrat rapaz("rapaz", 149);

	rapaz.executeForm(pres);
	
	return (0);
}