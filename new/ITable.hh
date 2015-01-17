//
// ITable.hh for ITable in /home/barnea_v/rendu/santa
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 11:19:18 2015 Viveka BARNEAUD
// Last update Sat Jan 17 15:49:19 2015 Viveka BARNEAUD
// Last update Sat Jan 17 12:28:54 2015 Viveka BARNEAUD
//

#ifndef		ITABLE_HH_
# define	ITABLE_HH_

# include	"Object.hh"

class		ITable
{
public:
  virtual ~ITable() {}
  virtual bool	putObject(Object *o) = 0;
  virtual Object *takeObject(int idx) = 0;
  virtual Object *takeObject() = 0;
  virtual void	Look() const = 0;
  virtual void	Look(int x) const = 0;
};

#endif		/* ITABLE_HH_ */
