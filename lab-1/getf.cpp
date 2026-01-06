#include <filesystem>
#include <iostream>
#include <string>
using namespace std;
namespace fs = std::filesystem;

int main() {
  string path = "D:\\obsidian\\log0\\Vocab\\en-US";
  for (const auto &entry : fs::directory_iterator(path))
    cout << entry.path() << endl;
}
