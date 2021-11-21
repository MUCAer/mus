#ifndef _UserServer_H_
#define _UserServer_H_

#include <iostream>
#include "servant/Application.h"

using namespace tars;

/**
 *
 **/
class UserServer : public Application
{
public:
    /**
     *
     **/
    virtual ~UserServer() {};

    /**
     *
     **/
    virtual void initialize();

    /**
     *
     **/
    virtual void destroyApp();
};

extern UserServer g_app;

////////////////////////////////////////////
#endif
