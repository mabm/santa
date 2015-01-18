#ifndef		_GIFTPAPER_HH_
# define	_GIFTPAPER_HH_
# include	<iostream>
# include	"Wrap.hh"

class		GiftPaper : public Wrap
{

public:

  GiftPaper();
  virtual	~GiftPaper();

  virtual bool	wrapMeThat(Object *toWrap);
};

#endif		/* _GIFTPAPER_HH_ */
