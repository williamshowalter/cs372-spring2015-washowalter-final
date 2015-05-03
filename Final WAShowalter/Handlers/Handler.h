//
//  Handler.h
//  Final WAShowalter
//
//  Created by William Showalter on 15/05/03.
//  Copyright (c) 2015 William Showalter. All rights reserved.
//

#ifndef __Final_WAShowalter__Handler__
#define __Final_WAShowalter__Handler__

#include <stdio.h>
#include <memory>
#include "Request.h"

class Handler {
public:
	virtual ~Handler() = default;

	virtual void handleRequest(Request) = 0;
	virtual void setSuccessor(std::unique_ptr<Handler> successor) = 0;

private:
};

#endif /* defined(__Final_WAShowalter__Handler__) */
