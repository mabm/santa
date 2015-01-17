
#ifndef		_WRAP_H_
# define	_WRAP_H_
# include	<iostream>
# include	"Object.hh"

class		Wrap
{
protected:
  Object	*objectIn;
public:
  Wrap();
  virtual	~Wrap();
  virtual bool	wrapMeThat(Object toWrap);
  virtual Object	*openMe();
  Object	*MyUnitTests(Object **);
  Object*	getObjectIn() const;
};

std::ostream&	operator<<(std::ostream &, Wrap const &);

#endif		/* _WRAP_H_ */
