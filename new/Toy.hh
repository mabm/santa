//
// Toy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:19:15 2015 Joris Bertomeu
<<<<<<< HEAD
// Last update Sun Jan 18 04:21:27 2015 Joris Bertomeu
=======
// Last update Sun Jan 18 03:00:42 2015 ades nicolas
>>>>>>> a642075bfc4c17af2bb60805a1ba4a43dc78d182
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
