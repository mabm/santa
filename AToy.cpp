//
// AToy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Fri Jan 16 23:26:36 2015 Joris Bertomeu
// Last update Sat Jan 17 00:10:22 2015 Joris Bertomeu
//

#include	"AToy.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"

AToy::AToy(std::string title)
{
  this->_title = title;
}

AToy::~AToy()
{

}

std::string const& AToy::getTitle() const
{
  return (this->_title);
}

void		AToy::setTitle(std::string title)
{
  this->_title = title;
}

Object	**AToy::MyUnitTests()
{
  Object	**tab;

  std::cout << "[UnitTest - Info]\tLet's build two toys !" << std::endl;
  if (!(tab = new Object*[2]))
    std::cerr << "[UnitTest -  KO ]\tArray Allocation failed .." << std::endl;
  else
    std::cout << "[UnitTest -  OK ]\tArray Allocation successed !" << std::endl;
  if (!(tab[0] = new Teddy("bisounours")))
    std::cerr << "[UnitTest -  KO ]\tTeddy Toy Allocation failed .." << std::endl;
  else
    std::cout << "[UnitTest -  OK ]\tTeddy Toy Allocation successed !" << std::endl;

  if (!(tab[1] = new LittlePony("gay pony")))
    std::cerr << "[UnitTest -  KO ]\tLittlePonny Toy Allocation failed .." << std::endl;
  else
    std::cout << "[UnitTest -  OK ]\tLittlePonny Toy Allocation successed !" << std::endl;
  std::cout << "[UnitTest - PAS1]\tTeddy's name : " << ((Teddy*) tab[0])->getTitle() << std::endl;
  std::cout << "[UnitTest - PAS1]\tLittlePony's name : " << ((LittlePony*) tab[1])->getTitle() << std::endl;
  return (tab);
}