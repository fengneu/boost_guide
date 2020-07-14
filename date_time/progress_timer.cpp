// Copyright (c) 2015
// Author: Chrono Law
#include <sstream>
#include <std.hpp>
using namespace std;

// disable pragma warning
#define BOOST_ALLOW_DEPRECATED_HEADERS

#include <boost/progress.hpp>
using namespace boost;

//////////////////////////////////////////

int main()
{
    {
        boost::progress_timer t;

    }
    sleep(1);
    {
        boost::progress_timer t;
    }
    sleep(1);

    stringstream ss;
    {
        progress_timer t(ss);
    }
    sleep(1);
    cout << ss.str();
}


