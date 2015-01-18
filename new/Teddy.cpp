//
// Teddy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:29:58 2015 Joris Bertomeu
// Last update Sun Jan 18 03:39:52 2015 Joris Bertomeu
//

#include	"Teddy.hh"

Teddy::Teddy(std::string name) : Toy(name, "Teddy")
{
  std::cout << "\033[36m[INFO]\tNew Teddy \"" << name << "\" Created !\033[0m" << std::endl;
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
  return (os << "\033[36m[INFO]\tThe Teddy named [" << elem.getTitle() << "] is up to you\033[0m" << std::endl);
}
