#include	<cstdlib>
#include	<sys/time.h>
#include	"Box.hh"
#include	"GiftPaper.hh"
#include	"ConveyorBeltPePeNoel.hh"

ConveyorBeltPePeNoel::ConveyorBeltPePeNoel()
{
  this->object = NULL;
  std::cout << "\033[36m[INFO]\tBuilding ConvoyerBelt !\033[0m" << std::endl;
}

ConveyorBeltPePeNoel::~ConveyorBeltPePeNoel()
{
  std::cout << "\033[36m[INFO]\tDestroying ConvoyerBelt !\033[0m" << std::endl;
}

Object		*ConveyorBeltPePeNoel::Take()
{
  Object	*ret;

  if (this->object) {
    ret = this->object;
    this->object = NULL;
    return (ret);
  }
  std::cout << "\033[31m[ERROR]\tCan't return wrapper 'cause there is no object on ConveyorBelt !\033[0m" << std::endl;
  return (NULL);
}

bool		ConveyorBeltPePeNoel::Put(Object *_object)
{
  if (this->object)
    {
      std::cerr << "\033[31m[ERROR]\tCan't put object on ConveyorBelt 'cause there is already an object\033[0m" << std::endl;
      return (false);
    }
  this->object = _object;
  std::cout << "\033[36m[INFO]\tPutting object on ConveyorBelt\033[0m" << std::endl;
  return (true);
}

void		ConveyorBeltPePeNoel::pressIn()
{
  int		_random;
  static	int toto = 0;
  
  srand(toto);
  _random = rand() % 3;
  toto++;
  if (_random == 0)
    this->object = new GiftPaper;
  else
    this->object = new Box;

  std::cout << "\033[36m[INFO]\tPressing IN ..\033[0m" << std::endl;
}

void		ConveyorBeltPePeNoel::pressOut()
{
  if (!this->object) {
    std::cerr << "\033[31m[ERROR]\tNoting put on ConveyorBelt\033[0m" << std::endl;
    return;
  }
  std::cout << "\033[36m[INFO]\tPressing Out ..\033[0m" << std::endl;
  delete this->object;
  this->object = NULL;
}

bool		ConveyorBeltPePeNoel::checkGift(Object * elem) const
{
  if (!elem->getName().compare("GiftPaper"))
    {
      std::cerr << "\033[31m[ERROR]\tGiftPaper isn't present." << std::endl;
      return false;
    }
  if ((((Wrap*)elem)->takeMe()) == NULL)
    {
      std::cerr << "\033[31m[ERROR]\tGiftPaper is empty." << std::endl;
      return false;
    }
  if (!((Wrap*)elem)->takeMe()->getName().compare("Box"))
    {
      std::cerr << "\033[31m[ERROR]\tBox isn't present." << std::endl;
      return false;
    }
  if (((Box*)((Wrap*)elem)->takeMe())->takeMe() == NULL)
    {
      std::cerr << "\033[31m[ERROR]\tBox is empty." << std::endl;
      return false;
    }
  if (!((Box*)((Wrap*)elem)->takeMe())->takeMe()->getName().compare("Teddy") ||
      !((Box*)((Wrap*)elem)->takeMe())->takeMe()->getName().compare("LittlePony") )
    {
      std::cerr << "\033[31m[ERROR]\tToy isn't present." << std::endl;
      return false;
    }
  return true;
}

IConveyorBelt	*ConveyorBeltPePeNoel::createConveyorBelt()
{
  return (new ConveyorBeltPePeNoel());
}
