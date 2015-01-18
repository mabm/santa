#ifndef		_CONVEYORBELTPEPENOEL_HH_
# define	_CONVEYORBELTPEPENOEL_HH_
# include	<iostream>
# include	"IConveyorBelt.hh"
# include	"Wrap.hh"

class		ConveyorBeltPePeNoel : public IConveyorBelt
{

 protected:

  Object	*object;

 public:

  ConveyorBeltPePeNoel();
  ~ConveyorBeltPePeNoel();

  virtual Object	*Take();
  virtual bool		Put(Object *);
  virtual void		pressIn();
  virtual void		pressOut();
  virtual bool		checkGift(Object *) const;
  virtual IConveyorBelt	*createConveyorBelt();
};

#endif		/* _CONVOYERBELTPEPENOEL_HH_ */
