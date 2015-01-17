//
// Teddy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:29:58 2015 Joris Bertomeu
// Last update Sat Jan 17 12:26:41 2015 audisio romain
//

#include	"LittlePony.hh"

LittlePony::LittlePony(std::string title) : AToy(title)
{
  this->_type = 1;
}

LittlePony::~LittlePony()
{

}

void		LittlePony::isTaken() const
{
  std::cout << "yo man" << std::endl;
}

std::ostream&	operator<<(std::ostream &os, LittlePony const & elem)
{
  return (os << "[INFO]\tThe LittlePony named [" << elem.getTitle() << "] is up to you.\n");
}
