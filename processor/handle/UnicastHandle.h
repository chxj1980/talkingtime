#ifndef __UNICAST_HANDLE_H__
#define __UNICAST_HANDLE_H__

#include "Handle.h"
#include "HandleFactory.h"

class UnicastHandle: public Handle {
public:
    void handleMesg(Session *, Connection *, MesgWrapper *);
    void buildRespMesg(MesgWrapper *, std::string &, void *);

    void buildUnicastMesg(MesgWrapper *, std::string &, void *);
};

REGISTER_HANDLE(UnicastHandle, UNICAST_MESSAGE_NO);

#endif
