#pragma once

#include <exception>
#include <sstream>
#include <string.h>
#include <string>

namespace jsock {

class SocketException : public std::exception {
public:
  SocketException(const std::string &message);
  SocketException(int errorNumber);
  ~SocketException() throw();

  virtual const char *what() const throw();

  const std::string message;
  const int errorNumber;
};

} // namespace jsock
