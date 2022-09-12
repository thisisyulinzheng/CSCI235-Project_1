#include <string>
#include <iostream>
#include "Post.hpp"

Post::Post(const std::string post_title, const std::string post_body) {
    setTitle(post_title);
    setBody(post_body);
    time(&time_stamp_);
};

void Post::setTitle(const std::string& post_title) {
    this->post_title = post_title;
};

std::string Post::getTitle() const {
    return post_title;
};

void Post::setBody(const std::string& post_body) {
    this->post_body = post_body;
};

std::string Post::getBody() const {
    return post_body;
};

void Post::getTimeStamp() {
    std::cout << asctime(localtime(&time_stamp_));
};

void Post::displayPost() {
    std::cout << getTitle() << " posted at ";
    getTimeStamp();
    std::cout << getBody() << std::endl;
}
