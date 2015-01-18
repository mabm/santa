
#include	"Toy.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"

Toy::Toy(std::string name, std::string type) : Object(name, type)
{

}

Toy::Toy(std::string name) : Object(name, "Toy")
{

}

Toy::~Toy()
{

}

Object		**Toy::MyUnitTests()
{
  Object	**tab;

  std::cout << "[UnitTest - Info]\tLet's build two toys !" << std::endl;
  if (!(tab = new Object*[2]))
    std::cerr << "[UnitTest -  KO ]\tArray Allocation failed .." << std::endl;
  else
    std::cout << "[UnitTest -  OK ]\tArray Allocation successed !" << std::endl;
  if (!(tab[0] = new Teddy("bisounours")))
    std::cerr << "[UnitTest -  KO ]\tTeddy Toy Allocation failed .." << std::endl;
  else
    std::cout << "[UnitTest -  OK ]\tTeddy Toy Allocation successed !" << std::endl;

  if (!(tab[1] = new LittlePony("gay pony")))
    std::cerr << "[UnitTest -  KO ]\tLittlePonny Toy Allocation failed .." << std::endl;
  else
    std::cout << "[UnitTest -  OK ]\tLittlePonny Toy Allocation successed !" << std::endl;
  std::cout << "[UnitTest - PAS1]\tTeddy's name : " << ((Teddy*) tab[0])->getTitle() << std::endl;
  std::cout << "[UnitTest - PAS1]\tLittlePony's name : " << ((LittlePony*) tab[1])->getTitle() << std::endl;
  return (tab);
}

void		Toy::isTaken() const
{
  std::cout << "Bad isTaken Bro !" << std::endl;
}
