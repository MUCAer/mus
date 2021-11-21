#include "mus.h"
#include "user_servant_imp.h"

using namespace std;
using namespace tars;
UserServer g_app;

void UserServer::initialize() {
    //initialize application here:
    //...

    addServant<UserServantImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".UserServant");
}


void UserServer::destroyApp() {
    //destroy application here:
    //...
}


int main(int argc, char* argv[]) {
    try
    {
        g_app.main(argc, argv);
        g_app.waitForShutdown();
    }
    catch (std::exception& e)
    {
        cerr << "std::exception:" << e.what() << std::endl;
    }
    catch (...)
    {
        cerr << "unknown exception." << std::endl;
    }
    return -1;
}

