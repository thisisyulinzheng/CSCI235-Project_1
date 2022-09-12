#include <time.h>
#ifndef POST_H_
#define POST_H_

class Post {
    public:
        Post(const std::string post_title, const std::string post_body);
        void setTitle(const std::string& post_title);
        std::string getTitle() const;
        void setBody(const std::string& post_body);
        std::string getBody() const;
        void getTimeStamp();
        void displayPost();

    private:
        std::string post_title;
        std::string post_body;
        time_t time_stamp_;
};

#endif