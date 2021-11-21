#ifndef _UserServantImp_H_
#define _UserServantImp_H_

#include "servant/Application.h"
#include "proto/user_servant.h"

/**
 *
 *
 */
class UserServantImp : public mus::UserServant
{
public:
    /**
     *
     */
    virtual ~UserServantImp() {}

    /**
     *
     */
    virtual void initialize();

    /**
     *
     */
    virtual void destroy();


    virtual tars::Int32 test(const std::string & input_info,const std::string & input_param,map<std::string, std::string> &out_ext_param,tars::TarsCurrentPtr current);
    
    virtual tars::Int32 check_username(const std::string & user_name,tars::TarsCurrentPtr current);

    virtual tars::Int32 retrieve_user_list(const mus::RetrieveUserListRequest & request,map<tars::Int64, mus::UserInfo> &response,tars::TarsCurrentPtr current);

    virtual tars::Int32 register_user_list(const mus::RegisterUserListRequest & request,map<tars::Int64, mus::UserInfo> &response,tars::TarsCurrentPtr current);





    
};
/////////////////////////////////////////////////////
#endif
