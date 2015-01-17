//
// GiftPaper.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:38:58 2015 Joris Bertomeu
// Last update Sat Jan 17 01:06:32 2015 Joris Bertomeu
//

#ifndef		_GIFTPAPER_HH_
# define	_GIFTPAPER_HH_
# include	<iostream>
# include	"Wrap.hh"

class		GiftPaper : public Object, public Wrap
{
public:
  GiftPaper();
  virtual	~GiftPaper();
  virtual bool	wrapMeThat(Object toWrap);
  virtual Object	*openMe();
};

#endif		/* _GIFTPAPER_HH_ */
