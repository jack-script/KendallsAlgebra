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

std::vector<int> EgetComponent(Coordinate initial, Coordinate terminal) {
	std::vector<int> Component;
	Component.push_back(terminal.x - initial.x);
	Component.push_back(terminal.y - initial.y);
	return Component;
}


namespace Kendall {

	// constructor
	KendallsVector::KendallsVector() {
	
	};

	// constructor
	KendallsVector::KendallsVector(Coordinate initial, Coordinate terminal) {
		//validateVectorSize(initial, terminal);
		//this->initialPoint = initial;
		//this->terminalPoint = terminal;
		//this->kendallComponent = EgetComponent(initial, terminal); // set the component of the vector:
	}

	// constructor
	//template <class T>
	//KendallsVector<T>::KendallsVector(std::vector<T> component) {
	//	// validate the size of the component:
	//	try {
	//		int sizeValue = 2;
	//		if (component.size != sizeValue) {
	//			throw(sizeValue);
	//		}
	//		else {
	//			this->kendallComponent = component;
	//		}
	//	}
	//	catch (int sizeValue) {
	//		std::cerr << "Component should have a maximum of " << sizeValue << std::endl;
	//	}
	//}

	Kendall::KendallsVector::~KendallsVector()
	{
	}

	// mutators:
	void KendallsVector::setCoordinates(Coordinate initial, Coordinate terminal) {
		this->initialPoint = initial;
		this->terminalPoint = terminal;
	}

	// function that checks the size of a vector:


	// function that calculates the component given initial and terminal points:
	//template <class T>
	//std::vector<T> KendallsVector<T>::EgetComponent(Coordinate<T> initial, Coordinate<T> terminal) {
	//	std::vector<T> Component;
	//	Component.push_back(terminal.x - initial.x);
	//	Component.push_back(terminal.y - initial.y);
	//	return Component;
	//}


	/*void KendallsVector::randomlyPopulate() {
		srand(time(0));
		for (auto i = 0; i < size; i++) {
			vec.push_back(rand() % 100);
		}
	}*/

	void KendallsVector::print() {
		std::vector<int>::iterator it;
		for (auto it = kendallComponent.begin(); it < kendallComponent.end(); it++) {
			std::cout << *it << std::endl;
		}
	}

	std::vector<int> KendallsVector::addVector(KendallsVector vector) {
		/*validateVectorSize(vectorComponent, vector);
		std::vector<int>::iterator it;
		std::vector<int> returnVector;
		for (auto i = 0; i < vector.size(); i++) {
			returnVector.push_back(vectorComponent[i] + vector[i]);
		}*/

		std::vector<int> v = {};
		return v;
	}

	std::vector<int> KendallsVector::subractVector(KendallsVector vector) {
		/*validateVectorSize(vectorComponent, vector);
		std::vector<int> returnVector;
		for (auto i = 0; i < vector.size(); i++) {
			returnVector.push_back(vectorComponent[i] - vector[i]);
		}
		return returnVector;*/
		std::vector<int> v = {};
		return v;
	}



	/*
	int KendallsVector::dotProduct(std::vector<int> vector) {
		validateVectorSize(vectorComponent, vector);
		std::vector<int>::iterator it;
		int sum = 0;
		for (auto i = 0; i < vector.size(); i++) {
			sum += vectorComponent[i] * vector[i];
		}
		return sum;
	}

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