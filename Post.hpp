/*
Author: Yulin Zheng
Date: September 13, 2022
File Title: Post.hpp
Description: This file defines the Post class of the project. 
*/

#include <time.h>
#ifndef POST_H_
#define POST_H_

class Post {
    public:
        /**
            Parameterized constructor.
            @param title  : The title of the post
            @param body   : The body content of the post

            Sets the title and body of the Post to what was passed by the user
            Will also generate the current time and store it
        */
        Post(const std::string post_title, const std::string post_body);

        /**
            @param  : a reference to title of the Post
        */
        void setTitle(const std::string& post_title);

        /**
             @return : the title of the Post
        */
        std::string getTitle() const;

        /**
             @param  : a reference to body of the Post
        */
        void setBody(const std::string& post_body);

        /**
             @return : the body of the Post
        */
        std::string getBody() const;

        /**
             @post   : prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))
        */
        void getTimeStamp() const;

        /**
             Print the Post in the following format:

            {title} posted at {time}:
            {body}

        */
        void displayPost() const;

    private:
        /**
            The Post class ontains the following private data members:
            The title of the post (a string)
            The body of the post (a string)
            The time that the post was created (a time_t object, using the time.h library)
        */
        std::string post_title;
        std::string post_body;
        time_t time_stamp_;
};

#endif