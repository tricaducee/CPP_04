#include "AMateria.hpp"
#include "Character.hpp"

Character::Character() : _name("")
{
	//std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	//std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &character)
{
	//std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (character.getInventory(i))
			this->_inventory[i] = character.getInventory(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = character.getName();
}

Character::~Character()
{
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(Character const &character)
{
	//std::cout << "Character assignation operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (character.getInventory(i))
			this->_inventory[i] = character.getInventory(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = character.getName();
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

AMateria *Character::getInventory(int idx) const
{
	return this->_inventory[idx];
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	this->_inventory[idx]->use(target);
}
