//
// GiftPaper.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:45:34 2015 Joris Bertomeu
// Last update Sat Jan 17 11:21:56 2015 Joris Bertomeu
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
