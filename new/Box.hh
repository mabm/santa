#ifndef		_BOX_HH_
# define	_BOX_HH_
# include	<iostream>
# include	"Wrap.hh"

class			Box : public Wrap
{

private:

  bool			isOpened;
  bool			showError(std::string, bool);

public:

  explicit		Box();
  virtual		~Box();


  virtual bool		wrapMeThat(Object *toWrap);
  void			openMe();
  void			closeMe();


  bool			getIsOpen() const;
  std::string		getNameOfContent() const;
};

std::ostream&		operator<<(std::ostream &, Box const &);

#endif		/* _BOX_HH_ */
