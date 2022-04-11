#include "Harl.hpp"

Harl::Harl()
{
	this->commandList["DEBUG"] = &Harl::debug;
	this->commandList["INFO"] = &Harl::info;
	this->commandList["WARNING"] = &Harl::warning;
	this->commandList["ERROR"] = &Harl::error;
}

Harl::~Harl()
{
}
// Privates
void Harl::debug( void ){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	Harl::info();
}

void Harl::info( void ){
	std::cout << "[INFO]" << std::endl;
	std::cout <<"I cannot believe adding extra bacon costs more money."<< std::endl;
	std::cout <<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	Harl::warning();
}

void Harl::warning( void ){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month."<< std::endl;
	Harl::error();
}

void Harl::error( void ){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}
// Public

void Harl::complain(std::string level){
	
	if (this->commandList[level])
		(this->*commandList[level])();
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
 
}
