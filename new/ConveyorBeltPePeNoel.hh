//
// ConveyorBeltPePeNoel.hh for  in /home/jobertomeu/Work/piscine_cpp/santa
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Sat Jan 17 11:49:08 2015 Joris Bertomeu
// Last update Sat Jan 17 19:10:41 2015 Viveka BARNEAUD
//

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
};

#endif		/* _CONVOYERBELTPEPENOEL_HH_ */
