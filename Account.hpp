#include <vector>
#include "Post.hpp"
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
    public:
        Account();
        Account(const std::string username, const std::string password);
        void setUsername(const std::string& username);
        std::string getUsername() const;
        void setPassword(const std::string& password);
        std::string getPassword() const;
        bool addPost(const std::string& post_title, const std::string& post_body);
        void viewPosts() const;
    private:
        std::string username;
        std::string password;
        std::vector<Post> user_posts;
};

#endif