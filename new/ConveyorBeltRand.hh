#ifndef		_CONVEYORBELTRAND_HH_
# define	_CONVEYORBELTRAND_HH_
# include	"ConveyorBeltPePeNoel.hh"

class ConveyorBeltRand : public ConveyorBeltPePeNoel
{
public:
  ConveyorBeltRand();
  virtual ~ConveyorBeltRand();
  bool		Zwify(int);
};

#endif		/* _CONVEYORBELTRAND_HH_ */
