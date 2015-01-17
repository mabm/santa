//
// Teddy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Fri Jan 16 23:23:30 2015 Joris Bertomeu
// Last update Fri Jan 16 23:51:17 2015 Joris Bertomeu
//

#ifndef		_TEDDY_HH_
# define	_TEDDY_HH_
# include	<iostream>
# include	"AToy.hh"

class Teddy : public AToy
{
public:
  explicit	Teddy(std::string title);
  virtual	~Teddy();
};

#endif		/* _TEDDY_HH_ */
