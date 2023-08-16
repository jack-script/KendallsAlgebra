#pragma once
#ifdef KENDALLSVECTOR_EXPORTS
#define KENDALLSVECTOR_API __declspec(dllexport)
#else
#define KENDALLSVECTOR_API __declspec(dllimport)
#endif


#include <vector>

namespace Kendall {

	
	struct Coordinate {
		int x;
		int y;
	} ;

	class __declspec(dllexport) KendallsVector
	{
	public:
		KendallsVector(); // initial constructor
		KendallsVector(Coordinate initial ,Coordinate terminal); // constructor that takes the points
		KendallsVector(std::vector<int> component); // constructor that takes the component
		~KendallsVector();
		void print(); // prints the components of the vecor
		std::vector<int> addVector(KendallsVector vector);
		std::vector<int> subractVector(KendallsVector vector);

		// mutators:
		void setVectorCoordinates(Coordinate initial, Coordinate terminal);
		// accessors:
		std::vector<Coordinate> getVectorCoordinates();

		std::vector<int> kendallComponent = {};
		
		/*int dotProduct(std::vector<int> vector);
		float getMagnitude();
		float getAngleBetweenVectors(KendallsVector vector);
		float getAngleBetweenVectors(std::vector<int>);
		float isOrthogonal(std::vector<int> vector);
		float isParallel(std::vector<int> vector);
		float scalar(int number);*/
	private:
		/*std::vector<T> getComponent();
		bool validateVectorSize(Coordinate<T> initial, Coordinate<T> terminal);
		std::vector<T> EgetComponent(Coordinate<T> initial, Coordinate<T> terminal);*/

		//std::vector<T> EgetComponent(Coordinate<T> initial, Coordinate<T> terminal);


		//bool validateVectorSize(Coordinate<T> initial, Coordinate<T> terminal);
		
		Coordinate initialPoint = {};
		Coordinate terminalPoint = {};
		int size;

	protected:
		
	};


}
