#include	"Object.hh"

Object::Object(std::string name, std::string type)
{
  this->_name = name;
  this->_type = type;
  std::cout << "\033[36m[INFO]\tCreating new Object with name \"" << name << "\" of type " << this->_type << "\033[0m" << std::endl;
}

Object::Object(std::string type)
{
  Object("", type);
}

Object::~Object()
{
  std::cout << "\033[36m[INFO]\tDestroying object with type " << this->_type << "\033[0m" << std::endl;
}

std::string	const&	Object::getName() const
{
  return (this->_name);
}

std::string	const&	Object::getTitle() const
{
  return (this->_type);
}

Object&			Object::operator=(Object const & elem)
{
  _type = elem.getTitle();
  _name = elem.getName();
  return (*this);
}
