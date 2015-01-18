//
// TablePePeNoel.hh for TablePePeNoel in /home/barnea_v/rendu/santa
//
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
//
// Started on  Sat Jan 17 11:47:24 2015 Viveka BARNEAUD
// Last update Sun Jan 18 02:59:36 2015 ades nicolas
// Last update Sat Jan 17 12:28:37 2015 Viveka BARNEAUD
//

#ifndef		TABLEPEPENOEL_HH_
# define	TABLEPEPENOEL_HH_

# include	"ITable.hh"


class		TablePePeNoel : public ITable
{
protected:

  Object	*_stack[11];

public:

  TablePePeNoel();
  TablePePeNoel(TablePePeNoel const& other);
  ~TablePePeNoel();

  int		getFirst(std::string);

  TablePePeNoel	&operator=(TablePePeNoel const& other);
  bool		putObject(Object *o);
  Object	*takeObject(int idx);
  Object	*takeObject();
  std::string	*Look() const;
  void		Look(int idx) const;
  ITable	*createTable();
  bool		isFull() const;
};

#endif		/* TABLEPEPENOEL_HH_ */
