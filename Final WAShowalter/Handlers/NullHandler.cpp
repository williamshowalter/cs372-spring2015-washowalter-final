//
//  NullHandler.cpp
//  Final WAShowalter
//
//  Created by William Showalter on 15/05/03.
//  Copyright (c) 2015 William Showalter. All rights reserved.
//

#include "NullHandler.h"

void NullHandler::handleRequest(std::unique_ptr<Request> r) {
	_logObserver->notify("Request fell of end of chain: ");
}

void NullHandler::setSuccessor(std::unique_ptr<Handler> r) {
	// Does nothing, no successor for NullHandler
}

void NullHandler::registerLogObserver(std::shared_ptr<HandlerObserver> observer) {
	_logObserver = observer;
}
