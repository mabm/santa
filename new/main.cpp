#include	<iostream>
#include	"Toy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"

int		main()
{
  Toy		toy("");
  Object	**tab = new Object*[3];
  GiftPaper	*present = new GiftPaper();

  tab[0] = (Object*) new Teddy("Joris");
  tab[1] = (Object*) new Box();
  tab[2] = (Object*) new GiftPaper();

  // toy.MyUnitTests();
  // std::cout << "Test 2" << std::endl;
  present = (GiftPaper*) present->MyUnitTests(tab);
}