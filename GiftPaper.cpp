
#include	"GiftPaper.hh"

GiftPaper::GiftPaper()
{
  std::cout << "[LOG]\tNew GiftPaper created !" << std::endl;
}

GiftPaper::~GiftPaper()
{

}

bool	GiftPaper::wrapMeThat(Object toWrap)
{
  if (this->objectIn)
    std::cerr << "[Error]\tGift Paper containing alreay something !" << std::endl;
  this->objectIn = &toWrap;
  std::cout << "tuuuut tuuut tuut" << std::endl;
  return (true);
}

Object	*GiftPaper::openMe()
{
   return (this->objectIn);
}
