//
// ParserXML.hh for ParserXML in /home/barnea_v/rendu/santa/new
// 
// Made by Viveka BARNEAUD
// Login   <barnea_v@epitech.net>
// 
// Started on  Sat Jan 17 23:03:36 2015 Viveka BARNEAUD
// Last update Sat Jan 17 23:38:37 2015 Viveka BARNEAUD
//

#ifndef		PARSERXML_HH_
# define	PARSERXML_HH_

# include	<iostream>
# include	<string>
# include	<fstream>
# include	"Object.hh"

class		GiftPaper;

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
