#include "Order.h"

Order::Order(std::string orderId) {
	this->orderId = orderId;
}

void Order::print() {
	std::cout << orderId << std::endl;
}
