#pragma 
#include<string>
#include"FileReaderTool.h"
#include <vulkan/vulkan_core.h>

class GraphicsPipeLine
{
	GraphicsPipeLine();
	void createGraphicsPipeline();
	VkShaderModule createShaderModule(const std::vector<char>& code);
	~GraphicsPipeLine();
public:
	std::string vertShaderFileName;
	std::string fragShaderFileName;
};

