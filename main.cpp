#include	<iostream>
#include	"AToy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"

int		main()
{
  AToy		toy("");
  Object	**tab = new Object*[3];
  GiftPaper	*present = new GiftPaper();

  tab[0] = new Teddy("Joris");
  tab[1] = new Box();
  tab[2] = new GiftPaper();

  std::cout << *((Teddy*)(tab[0]));
  toy.MyUnitTests();
  std::cout << "Test 2" << std::endl;
  present = (GiftPaper*) present->MyUnitTests(tab);
}
