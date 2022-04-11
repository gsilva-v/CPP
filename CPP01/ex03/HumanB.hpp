#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(const std::string name);
	~HumanB();
	void 	setWeapon(Weapon &weapon);
	void	attack(void);

};

#endif