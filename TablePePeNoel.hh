//
// TablePePeNoel.hh for TablePePeNoel in /home/barnea_v/rendu/santa
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 11:47:24 2015 Viveka BARNEAUD
// Last update Sat Jan 17 12:03:40 2015 Viveka BARNEAUD
//

#ifndef		TABLEPEPENOEL_HH_
# define	TABLEPEPENOEL_HH_

# include	"ITable.hh"

class		TablePePeNoel : public ITable
{
private:
  Object	*_stack[10];
public:
  TablePePeNoel();
  TablePePeNoel(TablePePeNoel const& other);
  ~TablePePeNoel();
  Object	*[10]getStack() const = 0;
  TablePePeNoel	&operator=(TablePePeNoel const& other);
  void		putObject(Object const& *o);
  Object	*takeObject(int idx);
  Object	*takeObject();
  void		Look() const;
  void		Look(int idx) const;
}

#endif		/* TABLEPEPENOEL_HH_ */
