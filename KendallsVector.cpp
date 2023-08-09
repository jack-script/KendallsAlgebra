#include "pch.h"
#include <iostream>
#include "KendallsVector.h"
#include <time.h>
#include <iterator>
#include <stdexcept>
#include <cmath>

// function that checks the size of a vector:
template <typename T>
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
template <typename T>
std::vector<int> EgetComponent(Coordinate<T> initial, Coordinate<T> terminal) {
	// Here I need to do something like... Termimal.x - Initial.x etc.

	/*std::vector<int>::iterator pointer;
	std::vector<int> component;

	for (auto i = 0; i < initial.size(); i++) {
		component.push_back(terminal[i] - initial[i]);
	}
	return component;*/
}

namespace Kendall {

	template <typename T>
	struct Coordinate {
		T x;
		T y;
	};

	template <class T>
	KendallsVector<T>::KendallsVector(Coordinate<T> initial, Coordinate<T> terminal) {
		//validateVectorSize(initial, terminal);
		this->initialPoint = initial;
		this->terminalPoint = terminal;
		this->vectorComponent = EgetComponent(initial, terminal); // set the component of the vector:
	}

	template <class T>
	KendallsVector<T>::KendallsVector(std::vector<int> component) {
		this->vectorComponent = component;
	}

	template <class T>
	Kendall::KendallsVector<T>::~KendallsVector()
	{
	}


	/*void KendallsVector::randomlyPopulate() {
		srand(time(0));
		for (auto i = 0; i < size; i++) {
			vec.push_back(rand() % 100);
		}
	}*/

	/*
	void KendallsVector::print() {
		std::vector<int>::iterator it;
		for (auto it = vectorComponent.begin(); it < vectorComponent.end(); it++) {
			std::cout << *it << std::endl;
		}
	}


	std::vector<int> KendallsVector::addVector(std::vector<int> vector) {
		validateVectorSize(vectorComponent, vector);
		std::vector<int>::iterator it;
		std::vector<int> returnVector;
		for (auto i = 0; i < vector.size(); i++) {
			returnVector.push_back(vectorComponent[i] + vector[i]);
		}
		return returnVector;
	}

	std::vector<int> KendallsVector::subractVector(std::vector<int> vector) {
		validateVectorSize(vectorComponent, vector);
		std::vector<int> returnVector;
		for (auto i = 0; i < vector.size(); i++) {
			returnVector.push_back(vectorComponent[i] - vector[i]);
		}
		return returnVector;
	}

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
	} */
}


