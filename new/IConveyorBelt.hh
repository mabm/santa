//
// IConveyorBelt.hh for  in /home/jobertomeu/Work/piscine_cpp/santa
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 11:47:12 2015 Joris Bertomeu
// Last update Sat Jan 17 16:20:15 2015 Joris Bertomeu
//

#ifndef		_ICONVOYERBELT_HH_
# define	_ICONVOYERBELT_HH_
# include	"Object.hh"

class IConveyorBelt
{
protected:
  Object	*currentObject;
public:
  IConveyorBelt() {}
  virtual ~IConveyorBelt() {}
  
};

#endif		/* _ICONVOYERBELT_HH_ */
