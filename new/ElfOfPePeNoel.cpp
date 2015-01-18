//
// ElfOfPepeNoel.cpp for  in /home/ades_n/PiscineCPP/santa/new
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 17:46:21 2015 ades nicolas
// Last update Sun Jan 18 02:17:24 2015 Joris Bertomeu
//

#include	"ElfOfPePeNoel.hh"
#include	"Toy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"
#include	"TableRand.hh"
#include	"ConveyorBeltRand.hh"


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
  TableRand		table;
  ConveyorBeltRand	tapis;
  Box			*box;
  GiftPaper		*finished;
  int			i = 0;

  table.Look();
  while (1)
    {
      if (!checkPresent(&table)) {
	std::cout << "pepe ya un schmolle dans le bignou" << std::endl;
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
      if (box->wrapMeThat((Object*)(table.takeObject(table.getFirst("Toy"))))) {
	finished = (GiftPaper*) table.takeObject(table.getFirst("GiftPaper"));
	finished->wrapMeThat(box);
	tapis.Put(finished);
	tapis.Zwify(i);
	tapis.pressOut();
	i++;
      }
    }
  table.Look();
  std::cerr << "\033[31m[ERROR]\tTable Collapsing !" << std::endl;
}
