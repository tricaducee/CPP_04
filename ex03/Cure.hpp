#ifndef CURE_HPP
# define CURE_HPP
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &cure);
		virtual ~Cure();
		Cure &operator=(Cure const &cure);
		AMateria *clone() const;
		void use(ICharacter &target);
};


#endif