#ifndef ICE_HPP
# define ICE_HPP
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &ice);
		virtual ~Ice();
		Ice &operator=(Ice const &ice);
		AMateria *clone() const;
		void use(ICharacter &target);
};


#endif