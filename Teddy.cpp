//
// Teddy.cpp for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Fri Jan 16 23:29:58 2015 Joris Bertomeu
// Last update Sat Jan 17 01:06:44 2015 Joris Bertomeu
//

#include	"Teddy.hh"

Teddy::Teddy(std::string title) : AToy(title)
{
  std::cout << "[LOG] New Teddy Created !" << std::endl;
  this->_type = 0;
}

Teddy::~Teddy()
{

}
