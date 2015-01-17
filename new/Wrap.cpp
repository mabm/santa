#include	<iostream>
#include	"Toy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"

Object*		Wrap::takeMe() const
{
  std::cout << "whistles while working" << std::endl;
  return (this->objectIn);
}

Wrap::Wrap(std::string name, std::string type) : Object(name, type)
{
  this->objectIn = NULL;
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

Object		*Wrap::MyUnitTests(Object **tab)
{
  Teddy		*teddy = (Teddy*) tab[0];
  Box		*box = (Box*) tab[1];
  GiftPaper	*gift = (GiftPaper*) tab[2];

  std::cout << "[UnitTest - Info] Let's create a gift !" << std::endl;

  box->openMe();
  box->wrapMeThat(*teddy);
  gift->wrapMeThat(*box);
  std::cout << "[UnitTest - Info] Let's test our Gift !" << std::endl;
  std::cout << "Name : " << teddy->getName() << std::endl;
  return (tab[2]);
}

std::ostream&	operator<<(std::ostream &os, Wrap const & elem)
{
  if (elem.takeMe())
    return (os << "[INFO]\tThis Wrap contains something." << std::endl);
  else
    return (os << "[INFO]\tThis Wrap contains nothing." << std::endl);
}

Wrap&		Wrap::operator=(Wrap const & elem)
{
  _type = elem.getTitle();
  _name = elem.getName();
  objectIn = elem.takeMe();
  return *this;
}
