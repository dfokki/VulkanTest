#pragma 
#include<string>
#include"FileReaderTool.h"
#include <vulkan/vulkan_core.h>
#include "RenderPass.h"

class GraphicsPipeLine
{
	
public:
	GraphicsPipeLine(VkDevice& device, VkExtent2D& swapChainExtent, RenderPass &renderPass)
		: renderPass(renderPass), _device(device), _swapChainExtent(swapChainExtent), vertShaderFileName("shaders/vert.spv"),
		fragShaderFileName("shaders/frag.spv") {
		createGraphicsPipeline();
	}
	RenderPass &renderPass;
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
	VkPipeline graphicsPipeline;
	VkExtent2D swapChainExtent;

};

