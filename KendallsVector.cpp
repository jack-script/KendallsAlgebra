#include "pch.h"
#include <iostream>
#include <utility>
#include <limits.h>

#include <time.h>
#include <iterator>
#include <stdexcept>
#include <cmath>
#include "KendallsVector.h"

struct Coordinate {
	int x;
	int y;
};




//template <class T>
//bool validateVectorSize(Coordinate<T> initial, Coordinate<T> terminal) {
//
//	if (vector1.size() != vector2.size()) {
//		throw std::invalid_argument("Initial and terminal vectors need to be the same size.");
//		return false;
//		exit(1);
//	}
//	else {
//		return true;
//	}
//}

//function that calculates the component given initial and terminal points:




namespace Kendall {

	// constructor
	KendallsVector::KendallsVector() {
		this->initialPoint = {0, 0};
		this->terminalPoint = { 0, 0 };
		//size = 0;
	};

	// constructor
	KendallsVector::KendallsVector(Coordinate initial, Coordinate terminal) {
		//validateVectorSize(initial, terminal);
		this->initialPoint = initial;
		this->terminalPoint = terminal;
		this->kendallComponent = EgetComponent(initial, terminal); // set the component of the vector
	}

	// constructor
	KendallsVector::KendallsVector(std::vector<int> component) {
		// validate the size of the component:
		try {
			int sizeValue = 2;
			if (component.size() != sizeValue) {
				throw(sizeValue);
			}
			else {
				this->initialPoint = {NULL, NULL};
				this->terminalPoint = {NULL, NULL};
				this->kendallComponent = component;
			}
		}
		catch (int sizeValue) {
			std::cerr << "Component should have a maximum of " << sizeValue << std::endl;
		}
	}
	/*void KendallsVector::randomlyPopulate() {
		srand(time(0));
		for (auto i = 0; i < size; i++) {
			vec.push_back(rand() % 100);
		}
	}*/

	Kendall::KendallsVector::~KendallsVector()
	{
	}

	std::vector<int> KendallsVector::EgetComponent(Coordinate initial, Coordinate terminal) {
		std::vector<int> Component;
		Component.push_back(terminal.x - initial.x);
		Component.push_back(terminal.y - initial.y);
		return Component;
	}

	// mutators:
	void KendallsVector::setVectorCoordinates(Coordinate initial, Coordinate terminal) {
		this->initialPoint = initial;
		this->terminalPoint = terminal;
	}

	// accessors:
	std::vector<Coordinate> KendallsVector::getVectorCoordinates() {
		Coordinate init = this->initialPoint;
		Coordinate term = this->terminalPoint;
		std::vector<Coordinate> returnVector;
		returnVector.push_back(init);
		returnVector.push_back(term);
		return returnVector;
	}

	std::vector<int> KendallsVector::getVectorComponent() {
		return kendallComponent;
	}

	int KendallsVector::getMagnitude() {
		std::vector<int> component = kendallComponent;
		int returnValue = 0;
		for (auto i = 0; i < component.size(); i++) {
			returnValue = returnValue + (pow(component[i], 2));
			returnValue = sqrt(returnValue);
		}
		return returnValue;
	}


	void KendallsVector::print() {
		std::vector<int>::iterator it;
		for (auto it = kendallComponent.begin(); it < kendallComponent.end(); it++) {
			std::cout << *it << std::endl;
		}
	}

	// this returns a new vectors components
	// Add vector method:
	std::vector<int> KendallsVector::addVector(KendallsVector vector) {
		std::vector<int> returnVector = {};
		std::vector<int> vectorComponent = vector.getVectorComponent();
		for (auto i = 0; i < vectorComponent.size(); i++) {
			returnVector.push_back(vectorComponent[i] + kendallComponent[i]); // adding the vector components together and pushing to new returnVector
		}
		return returnVector;
	}
	// Subtract vector method:
	std::vector<int> KendallsVector::subractVector(KendallsVector vector) {
		std::vector<int> returnVector = {};
		std::vector<int> vectorComponent = vector.getVectorComponent();
		for (auto i = 0; i < vectorComponent.size(); i++) {
			returnVector.push_back(kendallComponent[i] - vectorComponent[i] ); 
		}
		return returnVector;
	}

	int KendallsVector::dotProduct(KendallsVector vector) {
		int returnValue = 0;
		std::vector<int> returnVector = {};
		std::vector<int> vectorComponent = vector.getVectorComponent();

		for (auto i = 0; i < vectorComponent.size(); i++) {
			returnValue = returnValue + (kendallComponent[i] * vectorComponent[i]);
		}
		return returnValue;
	}



	/*
	

	std::vector<int> KendallsVector::getComponent() {
		return this->vectorComponent;
	}



	float KendallsVector::getMagnitude() {

		float result = 0;
		std::vector<int>::iterator ptr;
		for (auto ptr = vectorComponent.begin(); ptr < vectorComponent.end(); ptr++) {
			result += (float)pow(*ptr, 2);
		}
		return sqrt(result);
	}

	float KendallsVector::getAngleBetweenVectors(KendallsVector vector) {
		std::vector<int> paramComponent = vector.getComponent();
		float nominator = (float)this->dotProduct(paramComponent);
		float denominator = this->getMagnitude() * vector.getMagnitude();
		float result = acos(nominator / denominator);

		return result;
	}
	float KendallsVector::getAngleBetweenVectors(std::vector<int> vector) {

		return 100;
	}

	float  KendallsVector::isOrthogonal(std::vector<int> vector) {
		return 100;
	}
	float  KendallsVector::isParallel(std::vector<int> vector) {
		return 100;
	}
	float  KendallsVector::scalar(int number) {
		return 100;
	}
}

*/


};