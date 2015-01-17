//
// Toy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:19:15 2015 Joris Bertomeu
// Last update Sat Jan 17 14:43:09 2015 Joris Bertomeu
//

#ifndef				_TOY_HH_
# define			_TOY_HH_
# include			<string>
# include			<iostream>
# include			"Object.hh"

class				Toy :	public	Object
{
public:
  explicit			Toy(std::string, std::string);
  explicit			Toy(std::string);
  virtual			~Toy();
  Object			**MyUnitTests();
  virtual void			isTaken() const;
};

#endif		/* _TOY_HH_ */
