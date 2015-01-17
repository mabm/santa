//
// Box.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:16:01 2015 Joris Bertomeu
// Last update Sat Jan 17 01:08:00 2015 Joris Bertomeu
//

#ifndef		_BOX_HH_
# define	_BOX_HH_
# include	<iostream>
# include	"Wrap.hh"

class Box : public Object, public Wrap
{
private:
  bool		isOpened;
  bool		showError(std::string, bool);
public:
  Box();
  virtual	~Box();
  virtual bool	wrapMeThat(Object toWrap);
  virtual Object*	openMe();
  bool			closeMe();
};

#endif		/* _BOX_HH_ */
