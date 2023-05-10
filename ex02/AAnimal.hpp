#ifndef AANIMAL_HPP
# define AANIMAL_HPP
#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const &animal);
		virtual ~AAnimal();
		AAnimal &operator=(AAnimal const &animal);
		virtual void makeSound() const = 0;
		std::string getType() const;
	protected:
		std::string _type;
};

class IAnimal
{
	public:
		virtual ~IAnimal() = 0;
		virtual IAnimal &operator=(IAnimal const &animal) = 0;
		virtual void makeSound() const = 0;
		virtual std::string getType() const = 0;
};

#endif