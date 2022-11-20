#pragma once
#include <fstream>
#include <iostream>
#define ERROR(err)                                                             \
  std::cout << "ERROR(" << __FILE__ << ", " << __LINE__ << ") : " << err       \
            << std::endl
#define LOG(err) std::cout << err << std::endl
#define DEBUG(err)                                                             \
  std::cout << "DEBUG(" << __FILE__ << ", " << __LINE__ << ") : " << err       \
            << std::endl
#define QI_ERROR(file, line, err)                                              \
  std::cout << "Error in " << file << " line " << line << " : " << err         \
            << std::endl;

static std::string read_file_and_get_content(std::string filename) {
  std::string content = "";
  std::ifstream f(filename);
  if (f.is_open()) {
    while (f) {
      char c = f.get();
      content.append(&c);
    }
  } else {
    ERROR(std::string("Cannot open file ") + filename);
  }

  return content;
}