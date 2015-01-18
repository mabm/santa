
#include	<iostream>
#include	<fstream>
#include	"ParserXML.hh"
#include	"Teddy.hh"
#include	"LittlePony.hh"

ParserXML::ParserXML()
{
}

ParserXML::~ParserXML()
{
  this->CloseFile();
}

bool		ParserXML::OpenFile(std::string const& filename)
{
  this->CloseFile();
  this->_file.open(filename.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
  if (!this->_file)
    {
      std::cerr << "\033[31m[ERROR]\tCannot open the XML file : " << filename << " !\033[0m" << std::endl;
      return (false);
    }
  return (true);
}

bool		ParserXML::OpenFile(std::string const& filename, int mode)
{
  this->CloseFile();
  this->_file.open(filename.c_str());
  if (!this->_file)
    {
      std::cerr << "\033[31m[ERROR]\tCannot open the XML file : " << filename << " !\033[0m" << std::endl;
      return (false);
    }
  return (true);
}

void		ParserXML::CloseFile()
{
  if (this->_file)
    this->_file.close();
}

void		ParserXML::Serialize(GiftPaper *gift)
{
  this->_file << "<?xml version=\"1.0\"?>" << std::endl << std::endl;
  this->_file << "<GiftPaper>" << std::endl;
  this->_file << "\t<Box>" << std::endl;

  this->_file << "\t\t<Toy type=\"" <<
    ((std::string) ((Toy*) ((Box*) gift->takeMe())->
		    takeMe())->getTitle()) << "\">" <<
    ((std::string) ((Toy*) ((Box*) gift->takeMe())->
		    takeMe())->getName()) << "</Toy>" <<
    std::endl;
  this->_file << "\t</Box>" << std::endl;
  this->_file << "</GiftPaper>" << std::endl;
}

bool		ParserXML::getXMLbuffer()
{
  char		a;

  while (this->_file.get(a))
   this->_buffer.push_back(a);
  return (true);
}

GiftPaper	*ParserXML::DeSerialize()
{
  Object	*myToy;
  GiftPaper	*ret = new GiftPaper();
  Box		*myBox = new Box();;
  std::string	type = "";
  std::string	name = "";
  bool		GP = false, box = false;

  for (std::string line; getline(this->_file, line);)
    {
      if (line.find("version") != std::string::npos)
	std::cout << "Good Version !" << std::endl;
      if (line.find("<GiftPaper>") != std::string::npos)
	GP = true;
      else if (line.find("<Box>") != std::string::npos && GP)
	box = true;
      else if (line.find("<Toy ") != std::string::npos && box) {
	if (line.find("</Toy>") == std::string::npos)
	  std::cerr << "Toy balise not closed" << std::endl;
	if (line.find("type=\"") != std::string::npos)
	  type = line.substr(line.find("type=\"") + 6, line.find("\">")-(line.find("type=\"") + 6));
	name = line.substr(line.find("\">") + 2, line.find("</Toy>")-(line.find("\">") + 2));
      } else if (line.find("</GiftPaper>") != std::string::npos && !box)
	GP = false;
      else if (line.find("</Box>") != std::string::npos)
	box = false;
    }
  if (!type.compare("Teddy"))
    myToy = new Teddy(name);
  else if (!type.compare("LittlePony"))
    myToy = new LittlePony(name);
  else
    myToy = new Toy(name, type);
  myBox->openMe();
  myBox->wrapMeThat(myToy);
  ret->wrapMeThat(myBox);
  return (ret);
}

int		ParserXML::CountGifts() const
{
  int		count = 0;
  int		pos = 0;

  while (pos <= this->_buffer.npos)
    {
      if ((pos = this->_buffer.find("<GiftPaper>", pos)) != this->_buffer.npos)
	count++;
    }
  return (count);
}
