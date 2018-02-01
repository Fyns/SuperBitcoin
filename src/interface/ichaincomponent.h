#pragma once

#include "componentid.h"
#include "../framework/component.hpp"

using namespace appbase;
class IChainComponent : public CComponent<IChainComponent>
{
public:
    virtual ~IChainComponent() {}

    enum { ID = CID_BLOCK_CHAIN };
    virtual int GetID() const override { return ID; }

    virtual bool ComponentInitialize() = 0;
    virtual bool ComponentStartup() = 0;
    virtual bool ComponentShutdown() = 0;
    virtual const char* whoru() const = 0;

    //add other interface methods here ...

};
