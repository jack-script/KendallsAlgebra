#pragma once
#pragma once
#include <vector>

namespace Kendall {

	class __declspec(dllexport) KendallsVector
	{
	public:
		KendallsVector(std::vector<int> initial, std::vector<int> terminal); // constructor that takes the points
		KendallsVector(std::vector<int> component); // constructor that takes the component
		~KendallsVector();
		void print(); // prints the components of the vecor
		std::vector<int> addVector(std::vector<int> vector);
		std::vector<int> subractVector(std::vector<int> vector);


		int dotProduct(std::vector<int> vector);
		float getMagnitude();
		float getAngleBetweenVectors(KendallsVector vector);
		float getAngleBetweenVectors(std::vector<int>);
		float isOrthogonal(std::vector<int> vector);
		float isParallel(std::vector<int> vector);
		float scalar(int number);
	private:
		std::vector<int> getComponent();
		std::vector<int> vectorComponent;
		std::vector<int> initialPoint = {};
		std::vector<int> terminalPoint = {};
		int size;
	};


}
