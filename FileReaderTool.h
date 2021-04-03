#pragma once
#include <vector>
#include <string>
#include <fstream>

class FileReaderTool
{
private:
private:
    // Disallow creating an instance of this object
    FileReaderTool() {};
public:
    static std::vector<char> ReadFile(const std::string& filename);
};

