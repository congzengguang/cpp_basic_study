#pragma once
#include <iostream>
#include <string>
class Order {
private :
	std::string orderId;
public:
	Order(std::string orderId);
	void print();
};