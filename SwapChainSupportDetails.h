#pragma once
#include <vulkan\vulkan_core.h>
#include <vector>
class SwapChainSupportDetails
{
public:
    VkSurfaceCapabilitiesKHR capabilities;
    std::vector<VkSurfaceFormatKHR> formats;
    std::vector<VkPresentModeKHR> presentModes;
};

