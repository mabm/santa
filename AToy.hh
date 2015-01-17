//
// Toy.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Fri Jan 16 23:19:15 2015 Joris Bertomeu
// Last update Sat Jan 17 00:57:59 2015 Joris Bertomeu
//

#ifndef				_ATOY_HH_
# define			_ATOY_HH_
# include			<string>
# include			<iostream>
# include			"Object.hh"

class				AToy :	public	Object
{
protected:
  std::string			_title;
  int				_type;
public:
  explicit			AToy(std::string title);
  virtual			~AToy();
  virtual std::string const&	getTitle() const;
  virtual void			setTitle(std::string title);
  Object			**MyUnitTests();
};

#endif		/* _ATOY_HH_ */
