//
// Teddy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:23:30 2015 Joris Bertomeu
// Last update Sat Jan 17 14:09:51 2015 Joris Bertomeu
//

#ifndef			_LITTLEPONY_HH_
# define		_LITTLEPONY_HH_
# include		"Toy.hh"

class			LittlePony : public Toy
{
public:
  LittlePony(std::string title);
  virtual ~LittlePony();

  virtual void		isTaken() const;
};

std::ostream&	operator<<(std::ostream &, LittlePony const &);

#endif		/* _LITTLEPONY_HH_ */
