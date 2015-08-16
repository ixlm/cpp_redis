#pragma once

#include <string>

#include "cpp_redis/replies/reply.hpp"

namespace cpp_redis {

class error_reply : public reply {
public:
    //! ctor & dtor
    error_reply(const std::string& error = "");
    ~error_reply(void) = default;

    //! copy ctor & assignment operator
    error_reply(const error_reply&) = default;
    error_reply& operator=(const error_reply&) = default;

public:
    //! impl
    type get_type(void) const;

    //! getter
    const std::string& get_error(void) const;

    //! setter
    void set_error(const std::string& error);

private:
    std::string m_error;
};

} //! cpp_redis
