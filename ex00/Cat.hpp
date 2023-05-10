#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();
		Cat &operator=(Cat const &cat);
		virtual void makeSound() const;
};

#endif