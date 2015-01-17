//
// TablePePeNoel.cpp for TablePePeNoel in /home/barnea_v/rendu/santa
//
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
//
// Started on  Sat Jan 17 11:52:03 2015 Viveka BARNEAUD
// Last update Sat Jan 17 18:28:58 2015 Viveka BARNEAUD
// Last update Sat Jan 17 12:32:13 2015 Viveka BARNEAUD
// Last update Sat Jan 17 16:43:20 2015 ades nicolas
//

#include	<iostream>
#include	"TablePePeNoel.hh"
#include	"Box.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"
#include	"GiftPaper.hh"

TablePePeNoel::TablePePeNoel()
{
  int		i = 0;

  while (i != 10)
    {
      this->_stack[i] = NULL;
      i++;
    }
  std::cout << "[INFO]\tInitialization of the table :" << std::endl;
  this->putObject(new Box());
  this->putObject(new Box());
  this->putObject(new GiftPaper());
  this->putObject(new GiftPaper());
  this->putObject(new LittlePony("Little Pony"));
  this->putObject(new Teddy("Teddy"));
  std::cout << "[INFO]\tThe table is ready to make 2 gifts." << std::endl;
}

TablePePeNoel::TablePePeNoel(TablePePeNoel const& other)
{
  int		i = 0;

  while (i != 10)
    {
      this->_stack[i] = other._stack[i];
      i++;
    }
}

TablePePeNoel::~TablePePeNoel()
{
  int		i = 0;

  while (i != 10)
    {
      if (this->_stack[i] != NULL)
	delete (this->_stack[i]);
      i++;
    }
}

TablePePeNoel	&TablePePeNoel::operator=(TablePePeNoel const& other)
{
  int		i = 0;

  while (i != 10)
    {
      this->_stack[i] = other._stack[i];
      i++;
    }
  return (*this);
}

bool		TablePePeNoel::putObject(Object *o)
{
  int		i = 0;

  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	{
	  this->_stack[i] = o;
	  std::cout << "[INFO]\tPutting the object in the slot " << i << std::endl;
	  return (true);
	}
      i++;
    }
  std::cerr << "[ERROR]\tThe table is already full : you can't put your object on it." << std::endl;
  return (false);
}

Object		*TablePePeNoel::takeObject(int idx)
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    {
      std::cerr << "[ERROR]\tNo such object at index " << idx << "." << std::endl;
      return (NULL);
    }
  return (this->_stack[idx]);
}

Object		*TablePePeNoel::takeObject()
{
  int		i;
  int		idx;
  Object	*tmp;

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] != NULL)
	idx = i;
      i++;
    }
  tmp = this->_stack[idx];
  this->_stack[idx] = NULL;
  return (tmp);
}

std::string	*TablePePeNoel::Look() const
{
  int		i;
  std::string	**ret = new std::string*[10];

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	{
	  ret[i] = new std::string("empty");
	  //ret[i] = "empty";
	  std::cout << "[LOOK]\t" << i << " : empty" << std::endl;
	}
      else
	{
	  std::cout << "[LOOK]\t" << i << " : " << ((Toy*)this->_stack[i])->getTitle() << std::endl;
	  ret[i] = new std::string(((Toy*)this->_stack[i])->getTitle());
	}
      i++;
    }
  ret[10] = NULL;
  return (*ret);
}

void		TablePePeNoel::Look(int idx) const
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    std::cout << "[LOOK]\t" << "Slot " << idx << " is empty." << std::endl;
  else
    std::cout << "[LOOL]\tSlot " << idx << " contains " << ((Toy*)this->_stack[idx])->getTitle() << std::endl;
}

ITable		*TablePePeNoel::createTable()
{
  return (new TablePePeNoel());
}
