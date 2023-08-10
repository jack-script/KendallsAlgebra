#include "pch.h"
#include <iostream>
#include "KendallsVector.h"
#include <time.h>
#include <iterator>
#include <stdexcept>
#include <cmath>

template <typename T>
struct Coordinate {
	T x;
	T y;
};


namespace Kendall {
	// constructor
	template <class T>
	KendallsVector<T>::KendallsVector(Coordinate<T> initial, Coordinate<T> terminal) {
		//validateVectorSize(initial, terminal);
		this->initialPoint = initial;
		this->terminalPoint = terminal;
		this->vectorComponent = EgetComponent(initial, terminal); // set the component of the vector:
	}

	// constructor
	template <class T>
	KendallsVector<T>::KendallsVector(std::vector<T> component) {
		// validate the size of the component:
		try {
			int sizeValue = 2;
			if (component.size != sizeValue) {
				throw(sizeValue)
			}
			else {
				this->vectorComponent = component;
			}
		}
		catch (int sizeValue) {
			std::cerr << "Component should have a maximum of " << sizeValue << std::endl;
		}
	}

	template <class T>
	Kendall::KendallsVector<T>::~KendallsVector()
	{
	}

	// function that checks the size of a vector:
	template <class T>
	bool validateVectorSize(Coordinate<T> initial, Coordinate<T> terminal) {
		// Now i need to change the way this works, use X,Y instead of vectors...
		// Or maybe I dont need to change check this anyway since im using Coordinates now...

		/*if (vector1.size() != vector2.size()) {
			throw std::invalid_argument("Initial and terminal vectors need to be the same size.");
			return false;
			exit(1);
		}
		else {
			return true;
		}*/
	}

	// function that calculates the component given initial and terminal points:
	template <class T>
	std::vector<T> EgetComponent(Coordinate<T> initial, Coordinate<T> terminal) {
		std::vector<T> Component;
		Component.push_back(terminal.x - initial.x);
		Component.push_back(terminal.y - initial.y);
		return Component;
	}


	/*void KendallsVector::randomlyPopulate() {
		srand(time(0));
		for (auto i = 0; i < size; i++) {
			vec.push_back(rand() % 100);
		}
	}*/

	template <class T>
	void KendallsVector<T>::print() {
		std::vector<int>::iterator it;
		for (auto it = vectorComponent.begin(); it < vectorComponent.end(); it++) {
			std::cout << *it << std::endl;
		}
	}

	template <class T>
	std::vector<T> KendallsVector<T>::addVector(KendallsVector<T> vector) {
		validateVectorSize(vectorComponent, vector);
		std::vector<int>::iterator it;
		std::vector<int> returnVector;
		for (auto i = 0; i < vector.size(); i++) {
			returnVector.push_back(vectorComponent[i] + vector[i]);
		}
		return returnVector;
	}

	template <class T>
	std::vector<T> KendallsVector<T>::subractVector(KendallsVector vector) {
		validateVectorSize(vectorComponent, vector);
		std::vector<int> returnVector;
		for (auto i = 0; i < vector.size(); i++) {
			returnVector.push_back(vectorComponent[i] - vector[i]);
		}
		return returnVector;
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