#include "Engine.h"
#include "../Window/Window.h"
#include <GLFW/glfw3.h>
#include <iostream>

// The Splash Engine Namespace
namespace se{

/*============================================================================================================*/
/*------PUBLIC FUNCTIONS--------------------------------------------------------------------------------------*/
/*============================================================================================================*/

	// Initialize The Engine
	bool Engine::Initialize (){

		// Print The Splash Engine Title
		std::cout << "-----------------------------------" << '\n';
		std::cout << "|   Splash Engine | Version 0.3   |" << '\n';
		std::cout << "| (C) 2014 Black Rain Interactive |" << '\n';
		std::cout << "-----------------------------------" << '\n';

		std::cout << "\nInitializing Libraries... ";

		// Init GLFW
		if (!Engine::InitGLFW ())
			return false;

		// Print Success
		std::cout << "Done\n";

		return true;
	}

/*============================================================================================================*/

	// Shut Down The Engine
	void Engine::ShutDown (){

		glfwDestroyWindow (Window::windowHandle);
		glfwTerminate ();
	}

/*============================================================================================================*/
/*------PRIVATE FUNCTIONS-------------------------------------------------------------------------------------*/
/*============================================================================================================*/

	// Initialize GLFW
	bool Engine::InitGLFW (){

		// Init GLFW And Check For Errors
		if (!glfwInit ()){

			// Print Error
			std::cout << "Failed\n";
			std::cout << "ERROR: Could not initialize GLFW.\n";

			return false;
		}

		// Return True
		return true;
	}
}