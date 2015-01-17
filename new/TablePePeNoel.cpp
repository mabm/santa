//
// TablePePeNoel.cpp for TablePePeNoel in /home/barnea_v/rendu/santa
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 11:52:03 2015 Viveka BARNEAUD
<<<<<<< HEAD
// Last update Sat Jan 17 16:20:29 2015 Joris Bertomeu
=======
// Last update Sat Jan 17 16:02:52 2015 Viveka BARNEAUD
>>>>>>> e20ca9e9d6a0f40147eccbd768d75cfb7778cc94
// Last update Sat Jan 17 12:32:13 2015 Viveka BARNEAUD
//

#include	<iostream>
#include	"TablePePeNoel.hh"
<<<<<<< HEAD
#include	"Toy.hh"
#include	<iostream>
#include	"TablePePeNoel.hh"
=======
>>>>>>> e20ca9e9d6a0f40147eccbd768d75cfb7778cc94
#include	"Toy.hh"

TablePePeNoel::TablePePeNoel()
{
  int		i = 0;

  while (i != 10)
    {
      this->_stack[i] = NULL;
      i++; 
    }
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
	  return (true);
	}
      i++;
    }
  return (false);
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

std::string	*TablePePeNoel::Look() const
{
  int		i;
  std::string	*ret = new std::string[10];

  i = 0;
  while (i != 10)
    {
      if (this->_stack[i] == NULL)
	{
	  ret[i] = "empty";
	  std::cout << i << " : empty" << std::endl;
	}
      else
	{
	  std::cout << i << " : " << ((Toy*)this->_stack[i])->getTitle() << std::endl;
	  ret[i] = ((Toy*)this->_stack[i])->getTitle();
	}
      i++;
    }
  ret[10] = "null";
  return (ret);
}

void		TablePePeNoel::Look(int idx) const
{
  if (idx < 0 || idx >= 10 || this->_stack[idx] == NULL)
    std::cout << "Slot " << idx << " is empty." << std::endl;
  else
    std::cout << "Slot " << idx << " contains " << ((Toy*)this->_stack[idx])->getTitle() << std::endl;
}
