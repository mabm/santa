//
// Box.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:18:58 2015 Joris Bertomeu
// Last update Sat Jan 17 12:37:20 2015 Joris Bertomeu
//

#include	"AToy.hh"
#include	"Box.hh"

bool		Box::showError(std::string str, bool ret)
{
  std::cerr << str << std::endl;
  return (ret);
}

Box::Box()
{
  std::cout << "[LOG]\tNew Box created !" << std::endl;
  this->isOpened = false;
  this->objectIn = NULL;
}

Box::~Box()
{

}

bool	Box::wrapMeThat(Object toWrap)
{
  if (this->objectIn)
    return (showError("[ERROR]\tBox containing already something !", false));
  if (!this->isOpened)
    return (showError("[ERROR]\tBox must be opened !", false));
  //showError("[INFO]\tWrapping object titled \"" << toWrap->getTitle() << \"", true);
  this->objectIn = &toWrap;
  return (true);
}

Object	*Box::openMe()
{
  if (this->isOpened)
    std::cout << "[Warning] Box already opened !" << std::endl;
  this->isOpened = true;
  return (this->objectIn);
}

bool	Box::closeMe()
{
  if (this->isOpened)
    return (true);
  this->isOpened = false;
  std::cout << "[Warning] Box already closed !" << std::endl;
  return (false);
}
