//
// Santa.cpp for Santa in /home/barnea_v/rendu/santa/new
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sun Jan 18 01:09:38 2015 Viveka BARNEAUD
// Last update Sun Jan 18 02:32:45 2015 Joris Bertomeu
//

#include	"ParserXML.hh"
#include	"GiftPaper.hh"

void		getGift(std::string const& filename)
{
  ParserXML	*parser = new ParserXML();
  GiftPaper	*gift;

  if (parser->OpenFile(filename) == false)
    return;
  gift = parser->DeSerialize();
  // ouverture du cadeau, etc.
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
