#include "GraphicsPipeLine.h"

GraphicsPipeLine::GraphicsPipeLine()
{
    
    vertShaderFileName = "shaders/vert.spv";
    fragShaderFileName = "shaders/frag.spv";
    createGraphicsPipeline();
}

void GraphicsPipeLine::createGraphicsPipeline() {
    auto vertShaderCode = FileReaderTool::ReadFile(vertShaderFileName);
    auto fragShaderCode = FileReaderTool::ReadFile(fragShaderFileName);
}

VkShaderModule GraphicsPipeLine::createShaderModule(const std::vector<char>& code)
{

}
GraphicsPipeLine::~GraphicsPipeLine()
{
}

