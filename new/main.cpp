#include	<iostream>
#include	"Toy.hh"
#include	"Wrap.hh"
#include	"GiftPaper.hh"
#include	"Box.hh"
#include	"Teddy.hh"
#include	"TablePePeNoel.hh"
#include	"ConvoyorBeltPePeNoel.hh"

void			TableUnitTest()
{
  TablePePeNoel		table;
  ConvoyorBeltPePeNoel	tapis;
  
  tapis.Take();		//FALSE
  tapis.pressOut();	//FALSE
  tapis.pressIn();	//TRUE;
}

int		main()
{
  // Toy		toy("");
  // Object	**tab = new Object*[3];
  // GiftPaper	*present = new GiftPaper();

  // tab[0] = (Object*) new Teddy("Joris");
  // tab[1] = (Object*) new Box();
  // tab[2] = (Object*) new GiftPaper();

  // // toy.MyUnitTests();
  // // std::cout << "Test 2" << std::endl;
  // present = (GiftPaper*) present->MyUnitTests(tab);
  TableUnitTest();
}
