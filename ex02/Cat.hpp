#ifndef CAT_HPP
# define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();
		Cat &operator=(Cat const &cat);
		virtual void makeSound() const;
		Brain *getBrain() const;
	private:
		Brain *_brain;
};

#endif