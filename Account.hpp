/*
Author: Yulin Zheng
Date: September 13, 2022
File Title: Account.hpp
Description: This file defines the Account class of the project. 
*/

#include <vector>
#include "Post.hpp"
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
    public:
        /**
             Default constructor.
            Sets the username and password of the Account to an empty string
            Sets the vector of posts to an empty vector
        */
        Account();

        /**
             Parameterized constructor.
            @param username  : username of the Account
            @param password  : password of the Account

            Sets the username and password of the Account to what was passed by the user
            Sets the vector of posts to an empty vector
        */
        Account(const std::string username, const std::string password);

        /**
            @param a reference to the username of the Account
        */
        void setUsername(const std::string& username);

        /**
             @return the username of the Account
        */
        std::string getUsername() const;

        /**
             @param a reference to the password of the Account
        */
        void setPassword(const std::string& password);

        /**
             @return the password of the Account
        */
        std::string getPassword() const;

        /**
            @param title   : A reference to the title used to generate the Post object
            @param body    : A reference to the body used to generate the Post object
            @post         : generates a Post with the given title and body and adds it to it's vector of posts
            @return       : Will return true if the Post does not have an empty title or body and the Post is successfully added to the vector
        */
        bool addPost(const std::string& post_title, const std::string& post_body);

        /*
            @post         : Prints the vector of Posts using their display function
        */
        void viewPosts() const;
    private:
        /**
            The Account class ontains the following private data members:
            The account username (a string)
            The account password (a string)
            A vector of Post objects that stores all the Posts posted by this account
        */
        std::string username;
        std::string password;
        std::vector<Post> user_posts;
};

#endif