//
// Wrap.cpp for  in /home/ades_n/PiscineCPP/santa
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 12:36:34 2015 ades nicolas
// Last update Sat Jan 17 12:41:13 2015 Joris Bertomeu
//

#include	<iostream>
#include	"AToy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"

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
