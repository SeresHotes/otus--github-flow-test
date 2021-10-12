#define BOOST_TEST_MODULE header-only multiunit test

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_version)

    BOOST_AUTO_TEST_CASE(test_valid_version)
    {
        BOOST_CHECK(version() > 0);
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(test_sum)

    BOOST_AUTO_TEST_CASE(test_sum_is_right)
    {
        BOOST_CHECK(sum(3, 8) == 11);
    }
    BOOST_AUTO_TEST_CASE(test_sum_less_zero)
    {
        BOOST_CHECK(sum(23, -40) == -17);
    }

BOOST_AUTO_TEST_SUITE_END()