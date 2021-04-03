#pragma once
#include <vulkan/vulkan_core.h>

//Plan is to add Vulkan instances here that other classes may require access to.
class VulkanBase
{
//protected: public for now
public:
	VkInstance instance;
	
};

