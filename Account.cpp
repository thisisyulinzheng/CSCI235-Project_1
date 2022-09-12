#include <string>
#include "Account.hpp"

Account::Account() {
    setUsername("");
    setPassword("");
    std::vector<Post> new_post_vector;
    user_posts = new_post_vector;
};

Account::Account(const std::string username, const std::string password) {
    setUsername(username);
    setPassword(password);
    std::vector<Post> new_post_vector;
    user_posts = new_post_vector;
};

void Account::setUsername(const std::string& username) {
    this->username = username;
};

std::string Account::getUsername() const {
    return username;
};

void Account::setPassword(const std::string& password) {
    this->password = password;
};

std::string Account::getPassword() const {
    return password;
}

bool Account::addPost(const std::string& post_title, const std::string& post_body) {
    if (post_title != "" && post_body != "") {
        Post new_post(post_title, post_body);
        user_posts.push_back(new_post);
        return true;
    }
    else {
        return false;
    }
}

void Account::viewPosts() {
    for (int i = 0; i < user_posts.size(); i++) {
        user_posts[i].displayPost();
    }
};