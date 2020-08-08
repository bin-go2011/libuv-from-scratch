#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "queue.h"

QUEUE q;

TEST_CASE( "init queue", "[queue]" ) {
    QUEUE_INIT(&q);
}