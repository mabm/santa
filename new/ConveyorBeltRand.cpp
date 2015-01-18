#include	<sstream>
#include	"ConveyorBeltRand.hh"
#include	"ParserXML.hh"

ConveyorBeltRand::ConveyorBeltRand() : ConveyorBeltPePeNoel()
{

}

ConveyorBeltRand::~ConveyorBeltRand()
{

}

bool			ConveyorBeltRand::Zwify(int i)
{
  ParserXML		*parser = new ParserXML();
  std::stringstream	ss;
  std::string		filename;

  ss << i;
  filename = "gift" + ss.str() + ".xml"; 
  if (!parser->OpenFile(filename))
    std::cerr << "\033[31m[ERROR]\t Error while opening file\033[0m" << std::endl;
  if (!this->object)
    std::cerr << "OBJECT NULL" << std::endl;
  parser->Serialize((GiftPaper*) this->object);
  parser->CloseFile();
  delete parser;
  std::cout << "\033[36m[INFO]\tXML File created successfully\033[0m" << std::endl;
  return (true);
}
