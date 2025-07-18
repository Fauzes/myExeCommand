#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyExCommand
#include <boost/test/unit_test.hpp>

#include <stdint-gcc.h>

#include <queue>
#include <exception>
#include "comandex.h"
#include "comandrepex.h"
#include "comandwritelog.h"
#include "comandhendlerex.h"
#include "commandhendlerex2.h"
#include "logCntr.h"
#include "iostream"

BOOST_AUTO_TEST_SUITE(test1)

BOOST_AUTO_TEST_CASE(test1)
{
    queue<IComand*> cmd_list;

    ComandEx cmdEx;

    // std::string log_name = "log.txt";

    LogCntr* log = new LogCntr();

    cmd_list.push(&cmdEx);

     while (cmd_list.size())
    {
        try
        {
            cmd_list.front()->execute();
        }
        catch (const exception& ex)
        {
            ComandHendlerEx* cmdErr = new ComandHendlerEx(&cmd_list, cmd_list.front(), ex, log);

            cmd_list.push(cmdErr);
        }

        cmd_list.pop();
    }

    std::string log_str;
    std::string str = "std::exception";

    log_str = log->reade_line(0); 

    std::cout << "--------------------------------------------------------------------" << '\n';

    std::cout << log_str << '\n';

    BOOST_CHECK_EQUAL(log_str, str);
}

BOOST_AUTO_TEST_SUITE_END()


