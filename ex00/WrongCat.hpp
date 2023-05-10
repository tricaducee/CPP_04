#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &cat);
		~WrongCat();
		WrongCat &operator=(WrongCat const &cat);
		void makeSound() const;
};

#endif