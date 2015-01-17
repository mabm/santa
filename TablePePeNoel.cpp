//
// TablePePeNoel.cpp for TablePePeNoel in /home/barnea_v/rendu/santa
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 11:52:03 2015 Viveka BARNEAUD
<<<<<<< HEAD
// Last update Sat Jan 17 12:25:00 2015 Joris Bertomeu
=======
// Last update Sat Jan 17 12:32:13 2015 Viveka BARNEAUD
>>>>>>> 4ab327fa7a272abace300f8be1d13fe8577dbb37
//

#include	<iostream>
#include	"TablePePeNoel.hh"
#include	"AToy.hh"

TablePePeNoel::TablePePeNoel()
{
<<<<<<< HEAD
  
=======
  int		i = 0;

  while (i != 10)
    {
      this->_stack[i] = NULL;
      i++; 
    }
>>>>>>> 4ab327fa7a272abace300f8be1d13fe8577dbb37
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

void		TablePePeNoel::putObject(Object *o)
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
	std::cout << i << " : " << ((AToy*)this->_stack[i])->getTitle() << std::endl;
      i++;
    }
}

void		TablePePeNoel::Look(int idx) const
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    std::cout << "Slot " << idx << " is empty." << std::endl;
  else
    std::cout << "Slot " << idx << " contains " << ((AToy*)this->_stack[idx])->getTitle() << std::endl;
}