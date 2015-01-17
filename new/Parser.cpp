//
// Parser.cpp for Parser in /home/barnea_v/rendu/santa/new
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 19:30:36 2015 Viveka BARNEAUD
// Last update Sat Jan 17 21:19:15 2015 Viveka BARNEAUD
//

#include	<iostream>
#include	<fstream>

void		createXML(Object *o)
{
  static int	i = 1;
  std::ostream	file("gift"+1+".xml");

  if (!file.is_open())
    {
      std::cerr << "\033[31m[ERROR]\tCannot open the XML file !\033[0m" << std::endl;
      return;
    }
  file << "<gift>" << std::endl;
  file << "\t<box>" << std::endl;
  file << "\t\t<toy type=\"" << ((Toy *) o->getType()) << "\">" << ((Toy *) o->getTitle()) << "</toy>" << std::endl;
  file << "\t</box>" << std::endl;
  file << "</gift>" << std::endl;
  i++;
  file.close();
}

std::string	getXMLbuffer(std::string const& filename)
{
  std::ifstream	file(filename.c_str());
  std::string	buffer;
  char		a;

  if (file == NULL)
    {
      std::cerr << filename << " : No such file or directory" << std::endl;
      return ("");
    }
  while (file.get(a))
    buffer.push_back(a);
  return (buffer);
}

Object		*getObject(std::string const& buffer)
{
  Object	*ret;
  std::string	title;
  std::string	type;


}
