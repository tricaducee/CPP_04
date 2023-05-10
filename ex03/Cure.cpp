#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
	//std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &cure)
{
	//std::cout << "Cure assignation operator called" << std::endl;
	this->_type = cure.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
