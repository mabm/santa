
#include	<iostream>
#include	<fstream>
#include	"ParserXML.hh"

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
<<<<<<< HEAD
  GiftPaper	*ret = new GiftPaper();
  for (std::string line; getline(this->_file, line);)
    {
      std::cout << line << std::endl;
    }
  
  return (ret);
=======
  //GiftPaper	*ret = new GiftPaper()[this->CountGifts + 1];


  //return (ret);
  return (NULL);
>>>>>>> 38d0ca1f7552646449c71aa0b574b3abd243bfeb
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
