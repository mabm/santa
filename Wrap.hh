//
// Box.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:13:03 2015 Joris Bertomeu
// Last update Sat Jan 17 00:55:12 2015 Joris Bertomeu
//

#ifndef		_WRAP_H_
# define	_WRAP_H_
# include	"Object.hh"

class		Wrap
{
protected:
  Object	*objectIn;
public:
  Wrap() {}
  virtual	~Wrap() {}
  virtual bool	wrapMeThat(Object toWrap) = 0;
  virtual Object	*openMe() = 0;
  Object	*MyUnitTests(Object **);
};

#endif		/* _WRAP_H_ */
