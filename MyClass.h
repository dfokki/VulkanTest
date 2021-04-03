#pragma once
class MyClass
{
	MyClass();
	~MyClass();

public:
    void run();

private:
    void initVulkan();

    void mainLoop();

    void cleanup();
};

