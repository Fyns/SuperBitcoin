#pragma once

#include <memory>
#include "../interface/inetcomponent.h"
#include "net.h"

class PeerLogicValidation;
class CNetComponent : public INetComponent
{
public:
    CNetComponent();
    ~CNetComponent();

    bool ComponentInitialize() override;
    bool ComponentStartup() override;
    bool ComponentShutdown() override;
    const char* whoru() const override { return "I am CNetComponent\n";}



private:
    std::unique_ptr<CConnman>   netConnMgr;
    std::unique_ptr<PeerLogicValidation> peerLogic;

    CConnman::Options  netConnOptions;
};