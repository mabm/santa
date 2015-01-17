#ifndef		_CONVEYORBELTPEPENOEL_HH_
# define	_CONVEYORBELTPEPENOEL_HH_
# include	<iostream>
# include	"IConveyorBelt.hh"
# include	"Wrap.hh"

class		ConveyorBeltPePeNoel : public IConveyorBelt
{
 protected:
  Wrap		*object;
 public:
  ConveyorBeltPePeNoel();
  ~ConveyorBeltPePeNoel();
  Wrap		*Take();
  bool		Put(Object *);
  void		pressIn();
  void		pressOut();
  bool		checkGift(Object *) const;
  IConveyorBelt	*createConveyorBelt();
};

#endif		/* _CONVOYERBELTPEPENOEL_HH_ */
