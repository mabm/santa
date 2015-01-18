//
// Teddy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:23:30 2015 Joris Bertomeu
// Last update Sun Jan 18 03:00:15 2015 ades nicolas
//

#ifndef		_TEDDY_HH_
# define	_TEDDY_HH_
# include	<iostream>
# include	"Toy.hh"

class		Teddy : public Toy
{

public:

  explicit	Teddy(std::string title);
  virtual	~Teddy();

  virtual void	isTaken() const;
};

std::ostream&	operator<<(std::ostream &, Teddy const &);

#endif		/* _TEDDY_HH_ */
