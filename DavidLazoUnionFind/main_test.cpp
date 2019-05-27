#include "catch.hpp"
#include "Unionfind.h"
#include <iostream>
#include <fstream>
#include <sstream>
SCENARIO("Prueba ---UnionFind")
    {
        GIVEN("Prueba de Nodos")
        {
            WHEN(" TAKES VALUES")
            {
                UnionFind obj(5);
                THEN("MAKES UNION")
                {
                    obj.UnionDavid(4, 2);
                    REQUIRE(obj.find(4)==obj.find(2));
                }
                THEN("MAKES UNION")
                {
                    obj.UnionDavid(0, 1);
                    REQUIRE(obj.find(2)!=obj.find(1));
                }
            }
        }
}