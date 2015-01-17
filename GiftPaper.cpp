//
// GiftPaper.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Sat Jan 17 00:45:34 2015 Joris Bertomeu
// Last update Sat Jan 17 01:05:06 2015 Joris Bertomeu
//

#include	"GiftPaper.hh"

GiftPaper::GiftPaper()
{
  std::cout << "[LOG] New GiftPaper created !" << std::endl;
}

GiftPaper::~GiftPaper()
{

}

bool	GiftPaper::wrapMeThat(Object toWrap)
{
  this->objectIn = &toWrap;
  return (true);
}

Object	*GiftPaper::openMe()
{
  return (this->objectIn);
}
