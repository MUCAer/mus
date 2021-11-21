#include "user_servant_imp.h"
#include "servant/Application.h"

using namespace std;


void UserServantImp::initialize() {
    //initialize servant here:
    //...
}


void UserServantImp::destroy() {
    //destroy servant here:
    //...
}


/**
* test interface
* @param input
* @param params
* @param &out
* @return 0 if ok, otherwise -1.
*/
int test_info(const std::string &input, const std::string& params,  std::map<std::string, std::string> &out) {
    if (input == "hello") {
        out["hello"] = "hello world";
        return 0;
    }

    return -1;
}


tars::Int32 UserServantImp::test(const std::string & input_info,const std::string & input_param,map<std::string, std::string> &out_ext_param,tars::TarsCurrentPtr current) {
    return test_info(input_info, input_param, out_ext_param);
}

tars::Int32 UserServantImp::check_username(const std::string & user_name,tars::TarsCurrentPtr current) {
    return 0;
}

tars::Int32 UserServantImp::retrieve_user_list(const mus::RetrieveUserListRequest & request,map<tars::Int64, mus::UserInfo> &response,tars::TarsCurrentPtr current) {
    return 0;
}

tars::Int32 UserServantImp::register_user_list(const mus::RegisterUserListRequest & request,map<tars::Int64, mus::UserInfo> &response,tars::TarsCurrentPtr current) {
    return 0;
}




