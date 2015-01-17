#include	"ConveyorBeltRand.hh"
#include	"ParserXML.hh"

ConveyorBeltRand::ConveyorBeltRand() : ConveyorBeltPePeNoel()
{

}

ConveyorBeltRand::~ConveyorBeltRand()
{

}

bool		ConveyorBeltRand::Zwify(GiftPaper *object)
{
  ParserXML	parser();

  if (!parser.OpenFile("toto.xml"))
    std::cerr << "\033[31m[ERROR]\t Error while opening file\033[0m" << std::endl;
  
}
