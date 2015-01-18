//
// ParserXML.hh for ParserXML in /home/barnea_v/rendu/santa/new
//
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
//
// Started on  Sat Jan 17 23:03:36 2015 Viveka BARNEAUD
// Last update Sun Jan 18 02:30:31 2015 ades nicolas
//

#ifndef		PARSERXML_HH_
# define	PARSERXML_HH_

# include	<iostream>
# include	<string>
# include	<fstream>
# include	"Object.hh"
# include	"GiftPaper.hh"
# include	"Toy.hh"
# include	"Box.hh"

class		ParserXML
{
private:
  std::fstream	_file;
  std::string	_buffer;
  bool		getXMLbuffer();
public:
  ParserXML();
  ~ParserXML();
  void		Serialize(GiftPaper *gift);
  GiftPaper	**DeSerialize();
  bool		OpenFile(std::string const& filename);
  void		CloseFile();
  int		CountGifts() const;
};

#endif		/* PARSERXML_HH_ */
