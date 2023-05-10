#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &brain);
		~Brain();
		Brain &operator=(Brain const &brain);
		std::string getIdea(int index) const;
	protected:
		std::string _ideas[100];
};

#endif