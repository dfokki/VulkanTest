#pragma once
#include "vulkan/vulkan_core.h"
class RenderPass
{
	VkDevice* _device;
public:
	RenderPass(VkDevice& device, VkFormat& swapChainImageFormat);
	~RenderPass();
	void createRenderPass(VkDevice& device, VkFormat& swapChainImageFormat);
	VkRenderPass _renderPass;

	
};

