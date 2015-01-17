//
// ElfOfPepeNoel.cpp for  in /home/ades_n/PiscineCPP/santa/new
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 17:46:21 2015 ades nicolas
// Last update Sat Jan 17 23:52:44 2015 Joris Bertomeu
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

bool			ElfOfPePeNoel::checkPresent(TablePePeNoel *table)
{
  if (table->getFirst("Box") != -1 && table->getFirst("GiftPaper") != -1 && table->getFirst("Toy") != -1)
    return (true);
  return (false);
}

void			ElfOfPePeNoel::start()
{
  TablePePeNoel		table;
  ConveyorBeltPePeNoel	tapis;
  Box			*box;
  GiftPaper		*finished;

  table.Look();
  while (1)
    {
      if (!checkPresent(&table)) {
	if (table.isFull())
	  break;
	tapis.pressIn();
	table.putObject((Object*) tapis.Take());
	continue;
      }
      if (!(box = (Box*) table.takeObject(table.getFirst("Box")))) {
	std::cerr << "Error, Box NULL" << std::endl;
	continue;
      }
      box->openMe();
      if (box->wrapMeThat((Object)*(table.takeObject(table.getFirst("Toy"))))) {
	finished = (GiftPaper*) table.takeObject(table.getFirst("GiftPaper"));
	finished->wrapMeThat(*box);  
	tapis.Put(box);
	tapis.pressOut();
      }
    }
  table.Look();
  std::cerr << "\033[31m[ERROR]\tTable Collapsing !" << std::endl;
}
