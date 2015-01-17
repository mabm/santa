//
// Wrap.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
//
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
//
// Started on  Sat Jan 17 00:56:04 2015 Joris Bertomeu
// Last update Sat Jan 17 12:13:37 2015 audisio romain
//

#include	<iostream>
#include	"AToy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"

Object*		Wrap::getObjectIn() const
{
  return this->objectIn;
}

Object		*Wrap::MyUnitTests(Object **tab)
{
  std::cout << "[UnitTest - Info] Let's create a gift !" << std::endl;
  ((Box*) tab[1])->wrapMeThat(*tab[0]);
  ((Box*) tab[1])->openMe();
  ((Box*) tab[1])->wrapMeThat(*tab[0]);
  ((GiftPaper*) tab[2])->wrapMeThat(*tab[1]);
  std::cout << "[UnitTest - Info] Let's test our Gift !" << std::endl;
  std::cout << "[UnitTest -  1  ] DeGifting our present to get Toy Name :"
	    <<
    (std::string) ((AToy*) ((Box*) ((GiftPaper*) tab[2])->openMe())->openMe())->getTitle()
	    << std::endl;
  return (tab[2]);
}

std::ostream&	operator<<(std::ostream &, Wrap const & elem)
{
  if (elem.getObjectIn())
    std::cout << "[INFO]\tThis Wrap contains something." << std::endl;
  else
    std::cout << "[INFO]\tThis Wrap contains nothing." << std::endl;
}
