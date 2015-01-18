//
// Teddy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Fri Jan 16 23:29:58 2015 Joris Bertomeu
// Last update Sun Jan 18 03:39:34 2015 Joris Bertomeu
//

#include	"LittlePony.hh"

LittlePony::LittlePony(std::string name) : Toy(name, "LittlePony")
{
  std::cout << "\033[36m[INFO]\tNew LittlePony Created !\033[0m" << std::endl;
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
  return (os << "\033[36m[INFO]\tThe LittlePony named [" << elem.getTitle() << "] is up to you.\033[0m" << std::endl);
}
