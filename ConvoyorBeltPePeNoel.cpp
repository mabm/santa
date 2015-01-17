//
// ConvoyorBeltPePeNoel.cpp for  in /home/jobertomeu/Work/piscine_cpp/santa
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 11:51:55 2015 Joris Bertomeu
// Last update Sat Jan 17 12:13:20 2015 Joris Bertomeu
//

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

Wrap		*ConvoyorBeltPePeNoel::pressIn()
{
  if (!this->object)
    return (this->object);
  std::cout << "[ERROR]\tCan't return wrapper 'cause there is already an object on ConveyorBelt !" << std::endl;
  return (NULL);
}

void		ConvoyorBeltPePeNoel::pressOut()
{
  std::cout << "[INFO]\tSending object on ConveyorBelt to Santa !" << std::endl;
  delete this->object;
}
