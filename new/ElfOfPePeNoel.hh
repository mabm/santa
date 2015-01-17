//
// ElfOfPepeNoel.hh for  in /home/ades_n/PiscineCPP/santa/new
//
// Made by ades nicolas
// Login   <ades_n@epitech.net>
//
// Started on  Sat Jan 17 17:44:24 2015 ades nicolas
// Last update Sat Jan 17 21:56:31 2015 Joris Bertomeu
//

#ifndef		ELFOFPEPENOEL_H_
# define	ELFOFPEPENOEL_H_
# include	<iostream>
# include	<string>
# include	"IElf.hh"
# include	"TablePePeNoel.hh"

class	ElfOfPePeNoel : public IElf
{
private:
  std::string		_name;
public:
  ElfOfPePeNoel();
  ElfOfPePeNoel(std::string name);
  ~ElfOfPePeNoel();
  bool			checkPresent(TablePePeNoel table);
  virtual void		start();
};

#endif /* ELFOFPEPENOEL */
