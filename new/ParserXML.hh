
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
  GiftPaper	*DeSerialize();
  bool		OpenFile(std::string const& filename);
  void		CloseFile();
  int		CountGifts() const;
};

#endif		/* PARSERXML_HH_ */
