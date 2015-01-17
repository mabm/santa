//
<<<<<<< HEAD
// Wrap.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:56:04 2015 Joris Bertomeu
// Last update Sat Jan 17 12:38:16 2015 Joris Bertomeu
=======
// Wrap.cpp for  in /home/ades_n/PiscineCPP/santa
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 12:36:34 2015 ades nicolas
// Last update Sat Jan 17 12:36:35 2015 ades nicolas
>>>>>>> 4ab327fa7a272abace300f8be1d13fe8577dbb37
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
<<<<<<< HEAD
	    << (std::string) ((Teddy*) ((Box*) ((GiftPaper*) tab[2])->openMe())->openMe())->getTitle()
	    << std::endl;
=======
  	    << (std::string) ((AToy*) ((Box*) ((GiftPaper*) tab[2])->openMe())->openMe())->getTitle()
  	    << std::endl;
>>>>>>> 4ab327fa7a272abace300f8be1d13fe8577dbb37
  return (tab[2]);
}
