
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

Wrap::Wrap()
{
  std::cout << "[INFO]\tCreating Wrap !" << std::endl;
}

Wrap::~Wrap()
{
  std::cout << "[INFO]\tDestroying Wrap !" << std::endl;
}

bool	Wrap::wrapMeThat(Object toWrap)
{
  if (!this->objectIn) {
    this->objectIn = &toWrap;
    return (true);
  }
  return (false);
}

Object	*Wrap::openMe()
{
  return (this->objectIn);
}

Object		*Wrap::MyUnitTests(Object **tab)
{
  std::cout << "[UnitTest - Info] Let's create a gift !" << std::endl;
  ((Box*) tab[1])->wrapMeThat(*tab[0]);
  ((Box*) tab[1])->openMe();
  ((Box*) tab[1])->wrapMeThat(*tab[0]);
  ((GiftPaper*) tab[2])->wrapMeThat(*tab[1]);
  std::cout << "[UnitTest - Info] Let's test our Gift !" << std::endl;
  GiftPaper	*gift = (GiftPaper*) tab[2];
  std::cout << "Name : 1" << std::endl;
  Box		*box = (Box*) gift->openMe();
  std::cout << "Name : 2" << std::endl;
  Teddy		*teddy = (Teddy*) box->openMe();
  std::cout << "Name : 3" << std::endl;
  std::cout << "Name : " << teddy->getTitle() << std::endl;

  std::cout << "[UnitTest -  1  ] DeGifting our present to get Toy Name :"
  	    << (std::string) ((AToy*) ((Box*) ((GiftPaper*) tab[2])->openMe())->openMe())->getTitle()
  	    << std::endl;
  return (tab[2]);
}

std::ostream&	operator<<(std::ostream & os, Wrap const & elem)
{
  if (elem.getObjectIn())
    return (os << "[INFO]\tThis Wrap contains something.\n");
  else
    return (os << "[INFO]\tThis Wrap contains nothing.\n");
}
