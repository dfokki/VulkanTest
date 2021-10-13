#pragma 
#include<string>
#include"FileReaderTool.h"
#include <vulkan/vulkan_core.h>

class GraphicsPipeLine
{
	
public:
	GraphicsPipeLine(VkDevice& device, VkExtent2D& swapChainExtent);
	void createGraphicsPipeline();
	VkShaderModule createShaderModule(const std::vector<char>& code, VkDevice &device);
	~GraphicsPipeLine();
	VkDevice _device;
	VkExtent2D _swapChainExtent;
	std::string vertShaderFileName;
	std::string fragShaderFileName;
	VkShaderModule vertShaderModule;
	VkShaderModule fragShaderModule;
	VkPipelineShaderStageCreateInfo  shaderStages[2];
	VkPipelineLayout pipelineLayout;
	VkExtent2D swapChainExtent;

};

