#include	"Box.hh"
#include	"GiftPaper.hh"

GiftPaper::GiftPaper() : Wrap("", "GiftPaper")
{
  std::cout << "\033[36m[INFO]\tNew GiftPaper created !\033[0m" << std::endl;
}

GiftPaper::~GiftPaper()
{

}

bool	GiftPaper::wrapMeThat(Object *toWrap)
{
  if (this->objectIn)
    std::cerr << "\033[31m[Error]\tGift Paper containing alreay something !\033[0m" << std::endl;
  if (!toWrap)
    std::cerr << "toWrap NULL !" << std::endl;
  this->objectIn = toWrap;
  std::cout << "tuuuut tuuut tuut" << std::endl;
  return (true);
}
