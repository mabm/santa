#include	"Toy.hh"
#include	"Teddy.hh"
#include	"Box.hh"

Box::Box() : Wrap("", "Box")
{
  std::cout << "\033[36m[INFO]\tNew Box created !\033[0m" << std::endl;
  this->isOpened = false;
  this->objectIn = NULL;
}

Box::~Box()
{

}

bool		Box::showError(std::string str, bool ret)
{
  std::cerr << str << std::endl;
  return (ret);
}


bool		Box::wrapMeThat(Object *toWrap)
{
  if (this->objectIn)
    return (showError("\033[31m[ERROR]\tBox containing already something !\033[0m", false));
  if (!this->isOpened)
    return (showError("\033[31m[ERROR]\tBox must be opened !\033[0m", false));
  if (!toWrap)
    return (showError("\033[31m[ERROR]\tObject insered is NULL\033[0m", false));
  std::cout << "\033[36m[INFO]\tWrapping object into Box\033[0m" << std::endl;
  this->objectIn = toWrap;
  return (true);
}

void		Box::openMe()
{
  if (this->isOpened)
    std::cout << "\033[35m[WARNING]\tBox already opened !\033[0m" << std::endl;
  this->isOpened = true;
  std::cout << "\033[36m[Info]\tBox opened\033[0m" << std::endl;
}

void		Box::closeMe()
{
  if (!this->isOpened)
    std::cout << "\033[35m[WARNING]\tBox already closed !\033[0m" << std::endl;
  this->isOpened = false;
  std::cout << "\033[35m[Info]\tBox closed\033[0m" << std::endl;
}

std::string	Box::getNameOfContent() const
{
  if (!this->objectIn)
    return ("OBJECT NULL");
  return (this->objectIn->getName());
}
