#ifndef MATTERIASOURCE_HPP
# define MATTERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &materiaSource);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource const &materiaSource);
		void learnMateria(AMateria *materia);
		AMateria *createMateria(std::string const &type);
	private:
		AMateria *_materia[4];
};

#endif
