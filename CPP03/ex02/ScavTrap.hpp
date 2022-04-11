#if !defined(SCAVTRAP_HPP)
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string const &name = "Default_Scav");
	ScavTrap(const ScavTrap &ref);
	ScavTrap	&operator=(ScavTrap const &rsh);
	~ScavTrap();
	void guardGate()const;

};

#endif // SCAVTRAP_HPP
