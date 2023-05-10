#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &character);
		~Character();
		Character &operator=(Character const &character);
		std::string const &getName() const;
		AMateria *getInventory(int idx) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string _name;
		AMateria *_inventory[4];
};

#endif
