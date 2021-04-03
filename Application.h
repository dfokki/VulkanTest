#pragma once
#define NOMINMAX
#define GLFW_INCLUDE_VULKAN
#define VK_USE_PLATFORM_WIN32_KHR
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3.h>
#include<GLFW/glfw3native.h>
#include "Validation.h"
#include <iostream>
#include "QueueFamilyIndices.h"
#include <string>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <optional>
#include <set>
#include "SwapChainSupportDetails.h"

class Application : Validation
{
private:
	
	//VkDebugUtilsMessengerCreateInfoEXT _debuginfo{};
	std::string _name;
	GLFWwindow* _window;
	VkPhysicalDevice _physicalDevice;
	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;
	//VkInstance _instance;
	VkDevice _device;
	//VkQueue _graphicsQueue; this is replaced by the presentationQueue
	VkSurfaceKHR _surface;
	VkQueue _graphicsQueue;
	VkQueue _presentationQueue;
	VkSwapchainKHR _swapChain;
	std::vector<VkImage> _swapChainImages;
	VkFormat _swapChainImageFormat;
	VkExtent2D _swapChainExtent;
	std::vector<VkImageView> swapChainImageViews;
	void initVulkan();
	void createImageViews();
	void selectPhysicalDevice();
	const std::vector<const char*> deviceExtensions = {
	VK_KHR_SWAPCHAIN_EXTENSION_NAME
	};
	bool isDeviceSuitable(VkPhysicalDevice device);

	QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

	/*VkResult vkCreateInstance( VkInstanceCreateInfo* pCreateInfo,
		 VkAllocationCallbacks* pAllocator,
		VkInstance* instance);*/
	bool checkDeviceExtensionSupport(VkPhysicalDevice device);
	void createInstance();
	void mainLoop();
	void cleanup();
	void initWindow();
	void CheckExtensionSupport(bool printResult);
	void CreateLogicalDevice();
	void CreateSurface();
	void createSwapChain();
	VkSurfaceFormatKHR chooseSwapSurfaceFormat(const std::vector<VkSurfaceFormatKHR>& availableFormats);
	VkPresentModeKHR chooseSwapPresentMode(const std::vector<VkPresentModeKHR>& availablePresentModes);
	VkExtent2D chooseSwapExtent(const VkSurfaceCapabilitiesKHR& capabilities);
	SwapChainSupportDetails querySwapChainSupport(VkPhysicalDevice device);
public:

	std::string GetName() { return _name; };
	Application();
	//void SetUpDebugInfoObject();
	explicit Application(std::string name);

	void run();
	
};

