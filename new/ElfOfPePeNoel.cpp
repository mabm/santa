//
// ElfOfPepeNoel.cpp for  in /home/ades_n/PiscineCPP/santa/new
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 17:46:21 2015 ades nicolas
// Last update Sat Jan 17 20:51:51 2015 Joris Bertomeu
//

#include	"ElfOfPePeNoel.hh"
#include	"Toy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"
#include	"TablePePeNoel.hh"
#include	"ConveyorBeltPePeNoel.hh"


ElfOfPePeNoel::ElfOfPePeNoel()
{
  this->_name = "GenericElf";
  std::cout << "\033[36m[INFO]\tElf created !\033[0m" << std::endl;
}

ElfOfPePeNoel::ElfOfPePeNoel(std::string name)
{
  this->_name = name;
  std::cout << "\033[36m[INFO]\tElf created !\033[0m" << std::endl;
}

ElfOfPePeNoel::~ElfOfPePeNoel()
{
  std::cout << "\033[36m[INFO]\tElf destroyed !\033[0m" << std::endl;
}

void			ElfOfPePeNoel::start()
{
  TablePePeNoel		table;
  ConveyorBeltPePeNoel	tapis;
  Box			*box;
  
  table.Look();
  if (!(box = ((Box*) table.takeObject(0)))) {
    std::cerr << "\033[31m[ERROR]\tBox NULL\033[0m" << std::endl;
    return;
  }
  box->openMe();
  if (box->wrapMeThat((Object)*(table.takeObject(4))))
    ((GiftPaper*) table.takeObject(2))->wrapMeThat(*box);  
  tapis.Put(box);
  tapis.pressOut();
  if (!(box = ((Box*) table.takeObject(1)))) {
    std::cerr << "\033[31m[ERROR]\tBox NULL\033[0m" << std::endl;
    return;
  }
  box->openMe();
  if (box->wrapMeThat((Object)*(table.takeObject(5))))
    ((GiftPaper*) table.takeObject(3))->wrapMeThat(*box);  
  tapis.Put(box);
  tapis.pressOut();
  table.Look();
}
