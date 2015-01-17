//
// IObject.hh for  in /home/jobertomeu/Work/piscine_cpp/rush2
// 
// Made by Joris Bertomeu
// Login   <jobertomeu@epitech.net>
// 
// Started on  Fri Jan 16 23:37:42 2015 Joris Bertomeu
// Last update Sat Jan 17 14:31:49 2015 Joris Bertomeu
//

#ifndef		_OBJECT_HH_
# define	_OBJECT_HH_
# include	<iostream>

class Object
{
protected:
  std::string	_type;
  std::string	_name;
public:
  Object(std::string, std::string);
  Object(std::string);
  virtual ~Object();
  std::string const& getName() const;
  std::string const& getTitle() const;
};

#endif		/* _OBJECT_HH_ */
