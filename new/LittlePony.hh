//
// Teddy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:23:30 2015 Joris Bertomeu
// Last update Sun Jan 18 04:23:48 2015 Joris Bertomeu
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
