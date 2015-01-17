//
// Parser.cpp for Parser in /home/barnea_v/rendu/santa/new
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 19:30:36 2015 Viveka BARNEAUD
// Last update Sat Jan 17 23:51:05 2015 Viveka BARNEAUD
//

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
  this->_file << "<GiftPaper>" << std::endl;
  this->_file << "\t<box>" << std::endl;
  this->_file << "\t\t<toy type=\"" << ((Toy *) o->getType()) << "\">" << ((Toy *) o->getTitle()) << "</toy>" << std::endl;
  this->_file << "\t</box>" << std::endl;
  this->_file << "</GiftPaper>" << std::endl;
}

bool		ParserXML::getXMLbuffer()
{
  char		a;

  while (this->_file.get(a))
   this->_buffer.push_back(a);
  return (true);
}

GiftPaper	**ParserXML::DeSerialize()
{
  GiftPaper	*ret = new GiftPaper()[this->CountGifts + 1];

  
  return (ret);
}

int		ParserXML::CountGifts() const
{
  int		count = 0;
  int		pos = 0;

  while (pos <= this->_buffer.npos)
    {
      if (pos = this->_buffer.find("<GiftPaper>", pos) != this->_buffer.npos)
	count++;
    }
  return (count);
}
