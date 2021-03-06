//
// TableRand.cpp for TableRand in /home/barnea_v/rendu/santa/new
//
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
//
// Started on  Sun Jan 18 00:24:33 2015 Viveka BARNEAUD
// Last update Sun Jan 18 02:31:23 2015 ades nicolas
//

#include	<cstdlib>
#include	<iostream>
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"
#include	"TableRand.hh"

TableRand::TableRand()
{
  int		i = 0;
  int		rand_object;

  std::cout << "\033[36m[INFO]\tCreating a random table...\033[0m" << std::endl;
  while (i != 10)
    {
      rand_object = random() % 4;
      if (rand_object == 0)
	this->_stack[i] = new Box();
      else if (rand_object == 1)
	this->_stack[i] = new GiftPaper();
      else if (rand_object == 2)
	this->_stack[i] = new Teddy("Teddy");
      else
	this->_stack[i] = new LittlePony("Pony");
      i++;
    }
  this->_stack[i] = NULL;
  std::cout << "\033[36m[INFO]\tRandom table successfully created !\033[0m" << std::endl;
}

TableRand::TableRand(TableRand const& other)
{
  int		i = 0;

  while (i != 11)
    {
      this->_stack[i] = other._stack[i];
      i++;
    }
}

TableRand::~TableRand()
{

}
