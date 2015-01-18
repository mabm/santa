
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

std::ostream&		operator<<(std::ostream &, LittlePony const &);

#endif		/* _LITTLEPONY_HH_ */
