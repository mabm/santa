
#include	"AToy.hh"
#include	"Teddy.hh"
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
  std::cout << "[INFO]\tWrapping object \"" << ((Teddy) toWrap).getTitle() << "\" into Box" << std::
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
