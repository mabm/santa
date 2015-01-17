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
  // ((Box*) tab[1])->openMe();
  // ((Box*) tab[1])->wrapMeThat(*tab[0]);
  // ((GiftPaper*) tab[2])->wrapMeThat(*tab[1]);

  std::cout << "[UnitTest - Info] Let's test our Gift !" << std::endl;
  std::cout << "Name : " << teddy->getName() << std::endl;

  // std::cout << "[UnitTest -  1  ] DeGifting our present to get Toy Name :"
  // 	    << (std::string) ((AToy*) ((Box*) ((GiftPaper*) tab[2])->openMe())->openMe())->getTitle()
  // 	    << std::endl;
  return (tab[2]);
}

<<<<<<< HEAD
std::ostream&	operator<<(std::ostream & os, Wrap const & elem)
=======
std::ostream&	operator<<(std::ostream &os, Wrap const & elem)
>>>>>>> 209bd2fdc20d1f0e6091d8cc92630c1cc4be6d84
{
  if (elem.takeMe())
    return (os << "[INFO]\tThis Wrap contains something." << std::endl);
  else
    return (os << "[INFO]\tThis Wrap contains nothing." << std::endl);
<<<<<<< HEAD
}

Wrap&		Wrap::operator=(Wrap const & elem)
{
  _type = elem.getTitle();
  _name = elem.getName();
  objectIn = elem.takeMe();
  return *this;
=======
>>>>>>> 209bd2fdc20d1f0e6091d8cc92630c1cc4be6d84
}
