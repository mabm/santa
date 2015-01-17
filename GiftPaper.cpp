//
// GiftPaper.cpp for  in /home/ades_n/PiscineCPP/santa
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 12:36:44 2015 ades nicolas
// Last update Sat Jan 17 12:36:44 2015 ades nicolas
//

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
  return (true);
}

Object	*GiftPaper::openMe()
{
   return (this->objectIn);
}
