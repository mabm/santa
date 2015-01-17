//
// ConvoyorBeltPePeNoel.cpp for  in /home/jobertomeu/Work/piscine_cpp/santa
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 11:51:55 2015 Joris Bertomeu
// Last update Sat Jan 17 16:34:52 2015 Joris Bertomeu
//

#include	<cstdlib>
#include	"Box.hh"
#include	"GiftPaper.hh"
#include	"ConvoyorBeltPePeNoel.hh"

ConvoyorBeltPePeNoel::ConvoyorBeltPePeNoel()
{
  this->object = NULL;
  std::cout << "[INFO]\tBuilding ConvoyerBelt !" << std::endl;
}

ConvoyorBeltPePeNoel::~ConvoyorBeltPePeNoel()
{
  std::cout << "[INFO]\tDestroying ConvoyerBelt !" << std::endl;
}

Wrap		*ConvoyorBeltPePeNoel::Take()
{
  if (this->object) {
    this->object = NULL;
    return (this->object);
  }
  std::cout << "[ERROR]\tCan't return wrapper 'cause there is already an object on ConveyorBelt !" << std::endl;
  return (NULL);
}

bool		ConvoyorBeltPePeNoel::Put(Object *_object)
{
  if (this->object)
    {
      std::cout << "[ERROR]\tCan't put object on ConveyorBelt 'cause there is already an object" << std::endl;
      return (false);
    }
  std::cout << "[INFO]\tPutting object on ConveyorBelt" << std::endl;
  return (false);
}

void		ConvoyorBeltPePeNoel::pressIn()
{
  int		_random = random() % 2;
  
  if (_random == 0)
    this->object = new GiftPaper;
  else
    this->object = new Box;
  std::cout << "[INFO]\tPressing IN .." << std::endl;
}

void		ConvoyorBeltPePeNoel::pressOut()
{
  std::cout << "[INFO]\tPressing Out .." << std::endl;
}
