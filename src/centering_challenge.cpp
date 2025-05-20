#include <iostream>
#include <string>
#include <vector>

void center_text(int width, std::string text)
{

  int len = text.length();
  int indent = (width - len) / 2;

  for (int i = 0; i < indent; i++)
    std::cout << " ";
  std::cout << text << std::endl;
}

int main()
{
  /* some sample text to center */
  std::vector<std::string> title = {
      "March Sales",
      "My First Project",
      "Centering output is so much fun!",
      "This title is very long, just to see whether the code can handle such a long title"};

  /* output each of the strings, centered */
  for (int x = 0; x < title.size(); x++)
  {
    /* assume the screen width to be 80 characters */
    center_text(80, title.at(x));
  }

  return (0);
}
