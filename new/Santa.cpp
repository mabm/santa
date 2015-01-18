//
// Santa.cpp for Santa in /home/barnea_v/rendu/santa/new
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sun Jan 18 01:09:38 2015 Viveka BARNEAUD
// Last update Sun Jan 18 04:23:12 2015 Joris Bertomeu
//

#include	"ParserXML.hh"
#include	"GiftPaper.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"

void		getGift(std::string const& filename)
{
  ParserXML	*parser = new ParserXML();
  GiftPaper	*gift;

  if (!parser->OpenFile(filename, 0))
    return;
  gift = parser->DeSerialize();
  std::cout << " TYPE : " << ((Object*) ((Box*) gift->takeMe())->takeMe())->getTitle() << std::endl;
  if (!((Object*) ((Box*) gift->takeMe())->takeMe())->getTitle().compare("Teddy"))
    ((Teddy*) ((Box*) gift->takeMe())->takeMe())->isTaken();
  else if (!((Object*) ((Box*) gift->takeMe())->takeMe())->getTitle().compare("LittlePony"))
    ((LittlePony*) ((Box*) gift->takeMe())->takeMe())->isTaken();
  else
    std::cout << "No Sound implemented for this type" << std::endl;
}

int		main(int argc, char **argv)
{
  int		i = 1;

  while (i != argc)
    {
      getGift(argv[i]);
      i++;
    }
  return (0);
}
