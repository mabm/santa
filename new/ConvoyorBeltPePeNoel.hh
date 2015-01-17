//
// ConvoyorBeltPePeNoel.hh for  in /home/jobertomeu/Work/piscine_cpp/santa
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Sat Jan 17 11:49:08 2015 Joris Bertomeu
// Last update Sat Jan 17 19:07:39 2015 Joris Bertomeu
//

#ifndef		_CONVOYERBELTPEPENOEL_HH_
# define	_CONVOYERBELTPEPENOEL_HH_
# include	<iostream>
# include	"IConveyorBelt.hh"
# include	"Wrap.hh"

class		ConvoyorBeltPePeNoel : public IConveyorBelt
{
 protected:
  Wrap		*object;
 public:
  ConvoyorBeltPePeNoel();
  ~ConvoyorBeltPePeNoel();
  Wrap		*Take();
  bool		Put(Object *);
  void		pressIn();
  void		pressOut();
  bool		checkGift(Object *) const;
  IConveyorBelt	*createConveyorBelt();
};

#endif		/* _CONVOYERBELTPEPENOEL_HH_ */
