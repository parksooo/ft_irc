#ifndef PASS_HPP
# define PASS_HPP

# include "Command.hpp"
# include "../srcs/UserInfo.hpp"
# include "Communicate.hpp"

class Pass : public Command {
    private :
            UserInfo &user;
            std::string password;
    public  :
            Pass(Message *msg, UserInfo &userInfo, std::string &password);
            ~Pass();
            void execute();
};

void sedMsgToClient(int fd, std::string str);
#endif