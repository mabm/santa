//
// Teddy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:29:58 2015 Joris Bertomeu
// Last update Sat Jan 17 15:05:40 2015 Joris Bertomeu
//

#include	"Teddy.hh"

Teddy::Teddy(std::string name) : Toy(name, "Teddy")
{
  std::cout << "[INFO]\tNew Teddy \"" << name << "\" Created !" << std::endl;
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
  return (os << "[INFO]\tThe Teddy named [" << elem.getTitle() << "] is up to you.\n");
}
