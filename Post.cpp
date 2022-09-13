/*
Author: Yulin Zheng
Date: September 13, 2022
File Title: Post.cpp
Description: This file defines the methods of the Post class. 
*/

#include <string>
#include <iostream>
#include "Post.hpp"

/**
    Parameterized constructor.
    @param title  : The title of the post
    @param body   : The body content of the post

    Sets the title and body of the Post to what was passed by the user
    Will also generate the current time and store it
*/
Post::Post(const std::string post_title, const std::string post_body) {
    setTitle(post_title);
    setBody(post_body);
    time(&time_stamp_);
};

/**
    @param  : a reference to title of the Post
*/
void Post::setTitle(const std::string& post_title) {
    this->post_title = post_title;
};

/**
     @return : the title of the Post
*/
std::string Post::getTitle() const {
    return post_title;
};

/**
     @param  : a reference to body of the Post
*/
void Post::setBody(const std::string& post_body) {
    this->post_body = post_body;
};

/**
     @return : the body of the Post
*/
std::string Post::getBody() const {
    return post_body;
};

/**
     @post   : prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))
*/
void Post::getTimeStamp() const {
    std::cout << asctime(localtime(&time_stamp_));
};

/**
     Print the Post in the following format:

    {title} posted at {time}:
    {body}

*/
void Post::displayPost() const {
    std::cout << getTitle() << " posted at ";
    getTimeStamp();
    std::cout << getBody() << std::endl;
}
