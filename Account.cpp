/*
Author: Yulin Zheng
Date: September 13, 2022
File Title: Account.cpp
Description: This file defines the methods of the Account class. 
*/

#include <string>
#include "Account.hpp"

/**
    Default constructor.
    Sets the username and password of the Account to an empty string
    Sets the vector of posts to an empty vector
*/
Account::Account() {
    setUsername("");
    setPassword("");
    std::vector<Post> new_post_vector;
    user_posts = new_post_vector;
};

/**
     Parameterized constructor.
    @param username  : username of the Account
    @param password  : password of the Account

    Sets the username and password of the Account to what was passed by the user
    Sets the vector of posts to an empty vector
*/
Account::Account(const std::string username, const std::string password) {
    setUsername(username);
    setPassword(password);
    std::vector<Post> new_post_vector;
    user_posts = new_post_vector;
};

/**
    @param a reference to the username of the Account
*/
void Account::setUsername(const std::string& username) {
    this->username = username;
};

/**
     @return the username of the Account
*/
std::string Account::getUsername() const {
    return username;
};

/**
     @param a reference to the password of the Account
*/
void Account::setPassword(const std::string& password) {
    this->password = password;
};

/**
     @return the password of the Account
*/
std::string Account::getPassword() const {
    return password;
}

/**
    @param title   : A reference to the title used to generate the Post object
    @param body    : A reference to the body used to generate the Post object
    @post         : generates a Post with the given title and body and adds it to it's vector of posts
    @return       : Will return true if the Post does not have an empty title or body and the Post is successfully added to the vector
*/
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

/*
    @post         : Prints the vector of Posts using their display function
*/
void Account::viewPosts() const {
    for (int i = 0; i < user_posts.size(); i++) {
        user_posts[i].displayPost();
    }
};