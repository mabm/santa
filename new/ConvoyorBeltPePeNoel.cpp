#include	<cstdlib>
#include	"Box.hh"
#include	"GiftPaper.hh"
#include	"ConvoyorBeltPePeNoel.hh"

ConvoyorBeltPePeNoel::ConvoyorBeltPePeNoel()
{
  this->object = NULL;
  std::cout << "\033[36m[INFO]\tBuilding ConvoyerBelt !\033[0m" << std::endl;
}

ConvoyorBeltPePeNoel::~ConvoyorBeltPePeNoel()
{
  std::cout << "\033[36m[INFO]\tDestroying ConvoyerBelt !\033[0m" << std::endl;
}

Wrap		*ConvoyorBeltPePeNoel::Take()
{
  Wrap		*ret;

  if (this->object) {
    ret = this->object;
    this->object = NULL;
    return (ret);
  }
  std::cout << "\033[31m[ERROR]\tCan't return wrapper 'cause there is no object on ConveyorBelt !\033[0m" << std::endl;
  return (NULL);
}

bool		ConvoyorBeltPePeNoel::Put(Object *_object)
{
  if (this->object)
    {
      std::cerr << "\033[31m[ERROR]\tCan't put object on ConveyorBelt 'cause there is already an object\033[0m" << std::endl;
      return (false);
    }
  std::cout << "\033[36m[INFO]\tPutting object on ConveyorBelt\033[0m" << std::endl;
  return (false);
}

void		ConvoyorBeltPePeNoel::pressIn()
{
  int		_random = random() % 2;

  if (_random == 0)
    this->object = new GiftPaper;
  else
    this->object = new Box;
  std::cout << "\033[36m[INFO]\tPressing IN ..\033[0m" << std::endl;
}

void		ConvoyorBeltPePeNoel::pressOut()
{
  if (!this->object) {
    std::cerr << "\033[31m[ERROR]\tNoting put on ConveyorBelt\033[0m" << std::endl;
    return;
  }
  std::cout << "\033[36m[INFO]\tPressing Out ..\033[0m" << std::endl;
  delete this->object;
  this->object = NULL;
}

bool		ConvoyorBeltPePeNoel::checkGift(Object * elem) const
{
  if (!elem->getName().compare("GiftPaper"))
    {
      std::cerr << "[ERROR]\tGiftPaper isn't present." << std::endl;
      return false;
    }
  if ((((Wrap*)elem)->takeMe()) == NULL)
    {
      std::cerr << "[ERROR]\tGiftPaper is empty." << std::endl;
      return false;
    }
  if (!((Wrap*)elem)->takeMe()->getName().compare("Box"))
    {
      std::cerr << "[ERROR]\tBox isn't present." << std::endl;
      return false;
    }
  if (((Box*)((Wrap*)elem)->takeMe())->takeMe() == NULL)
    {
      std::cerr << "[ERROR]\tBox is empty." << std::endl;
      return false;
    }
  if (!((Box*)((Wrap*)elem)->takeMe())->takeMe()->getName().compare("Teddy") ||
      !((Box*)((Wrap*)elem)->takeMe())->takeMe()->getName().compare("LittlePony") )
    {
      std::cerr << "[ERROR]\tToy isn't present." << std::endl;
      return false;
    }
  return true;
}
