#ifndef		_WRAP_H_
# define	_WRAP_H_
# include	<iostream>
# include	"Object.hh"

class			Wrap : public Object
{
protected:
  Object		*objectIn;
public:
  explicit		Wrap(std::string, std::string);
  virtual		~Wrap();
  virtual bool		wrapMeThat(Object toWrap);
  Object		*MyUnitTests(Object **);
  Object*		takeMe() const;
  Wrap&			operator=(Wrap const &);
};

std::ostream&	operator<<(std::ostream &, Wrap const &);

#endif		/* _WRAP_H_ */
