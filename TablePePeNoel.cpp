//
// TablePePeNoel.cpp for TablePePeNoel in /home/barnea_v/rendu/santa
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 11:52:03 2015 Viveka BARNEAUD
// Last update Sat Jan 17 12:05:50 2015 Viveka BARNEAUD
//

#include	"TablePePeNoel.hh"

TablePePeNoel::TablePePeNoel()
{
  this->_stack = new Object *[10];
}

TablePePeNoel::TablePePeNoel(TablePePeNoel const& other)
{
  this->_stack = other->getStack();
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

Object		*[10]TablePePeNoel::getStack() const
{
  return (this->_stack);
}

TablePePeNoel	&TablePePeNoel::operator=(TablePePeNoel const& other)
{
  this->_stack = other.getStack();
  return (*this);
}

void		TablePePeNoel::putObject(Object const& *o)
{
  int		i = 0;

  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	{
	  this->_stack[i] = o;
	  return;
	}
      i++;
    }
}

Object		*TablePePeNoel::takeObject(int idx)
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    {
      std::cerr << "No such object at index " << idx << "." << std::endl;
      return (NULL);
    }
  return (this->_stack[idx]);
}

Object		*TablePePeNoel::takeObject()
{
  int		i;
  int		idx;

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] != NULL)
	idx = i;
      i++;
    }
  return (this->_stack[idx]);
}

void		TablePePeNoel::Look()
{
  int		i;

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	std::cout << i << " : empty" << std::endl;
      else
	std::cout << i << " : " << this->_stack[i]->getTitle() << std::endl;
      i++;
    }
}

void		TablePePeNoel::Look(int idx)
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    std::cout << "Slot " << idx << " is empty." << std::endl;
  else
    std::cout << "Slot " << idx << " contains " << this->_stack[idx]->getTitle() << std::endl;
}
