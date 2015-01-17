//
// Teddy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:29:58 2015 Joris Bertomeu
// Last update Sat Jan 17 14:32:14 2015 audisio romain
//

#include	"Teddy.hh"

Teddy::Teddy(std::string title) : AToy(title)
{
  std::cout << "[LOG] New Teddy Created !" << std::endl;
  this->_type = 0;
}

Teddy::~Teddy()
{

}

void		Teddy::isTaken() const
{
  std::cout << "gra hu" << std::endl;
}

std::ostream&	operator<<(std::ostream &os, Teddy const & elem)
{
  return (os << "[INFO]\tThe Teddy named: [" << elem.getTitle() << "] is up to you.\n");
}
