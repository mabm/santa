#include	<iostream>
#include	"TablePePeNoel.hh"
#include	"Box.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"
#include	"GiftPaper.hh"

TablePePeNoel::TablePePeNoel()
{
  int		i = 0;

  while (i != 11)
    {
      this->_stack[i] = NULL;
      i++;
    }
  this->putObject(new Box());
  this->putObject(new Box());
  this->putObject(new GiftPaper());
  this->putObject(new GiftPaper());
  this->putObject(new Teddy("Teddy"));
  this->putObject(new LittlePony("Pony"));
  std::cout << "\033[36m[INFO]\tThe table is ready to make 2 gifts\033[0m" << std::endl;
}

TablePePeNoel::TablePePeNoel(TablePePeNoel const& other)
{
  int		i = 0;

  while (i != 11)
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

int		TablePePeNoel::getFirst(std::string str)
{
  int		i = 0;

  while (i != 10)
    {
      if (this->_stack[i]->getTitle().compare(str) == 0)
	return (i);
      i++;
    }
  return (-1);
}

TablePePeNoel	&TablePePeNoel::operator=(TablePePeNoel const& other)
{
  int		i = 0;

  while (i != 11)
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
	  std::cout << "\033[36m[INFO]\tPutting the object in the slot " << i << "\033[0m" << std::endl;
	  return (true);
	}
      i++;
    }
  std::cerr << "\033[31m[ERROR]\tThe table is already full : you can't put your object on it\033[0m" << std::endl;
  return (false);
}

Object		*TablePePeNoel::takeObject(int idx)
{
  Object	*tmp;

  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    {
      std::cerr << "\033[31m[ERROR]\tNo such object at index " << idx << "\033[0m" << std::endl;
      return (NULL);
    }
  tmp = this->_stack[idx];
  this->_stack[idx] = NULL;
  return (tmp);
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
  std::string	**ret = new std::string*[11];

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	{
	  ret[i] = new std::string("empty");
	  std::cout << "[LOOK]\t" << i << " : empty" << std::endl;
	}
      else
	{
	  std::cout << "[LOOK]\t" << i << " : " << this->_stack[i]->getTitle() << std::endl;
	  ret[i] = new std::string(this->_stack[i]->getTitle());
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
    std::cout << "[LOOL]\tSlot " << idx << " contains " << this->_stack[idx]->getTitle() << std::endl;
}

ITable		*TablePePeNoel::createTable()
{
  return (new TablePePeNoel());
}
