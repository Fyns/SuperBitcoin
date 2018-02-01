#pragma once

#include "componentid.h"
#include "../framework/component.hpp"

using namespace appbase;
class INetComponent : public CComponent<INetComponent>
{
public:
    virtual ~INetComponent() {}

    enum { ID = CID_P2P_NET };
    virtual int GetID() const override { return ID; }

    virtual bool ComponentInitialize() = 0;
    virtual bool ComponentStartup() = 0;
    virtual bool ComponentShutdown() = 0;
    virtual const char* whoru() const = 0;

    //add other interface methods here ...

};

