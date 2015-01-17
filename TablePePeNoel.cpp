//
// TablePePeNoel.cpp for TablePePeNoel in /home/barnea_v/rendu/santa
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 11:52:03 2015 Viveka BARNEAUD
// Last update Sat Jan 17 12:25:00 2015 Joris Bertomeu
//

#include	<iostream>
#include	"TablePePeNoel.hh"
#include	"AToy.hh"

TablePePeNoel::TablePePeNoel()
{
  
}

TablePePeNoel::TablePePeNoel(TablePePeNoel const& other)
{
  this->_stack = other->_stack;
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
  this->_stack = other._stack;
  return (*this);
}

void		TablePePeNoel::putObject(Object const *o)
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

void		TablePePeNoel::Look() const
{
  int		i;

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	std::cout << i << " : empty" << std::endl;
      else
	std::cout << i << " : " << this->(AToy *)_stack[i]->getTitle() << std::endl;
      i++;
    }
}

void		TablePePeNoel::Look(int idx) const
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    std::cout << "Slot " << idx << " is empty." << std::endl;
  else
    std::cout << "Slot " << idx << " contains " << this->(AToy *)_stack[idx]->getTitle() << std::endl;
}
