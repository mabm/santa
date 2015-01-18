
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
