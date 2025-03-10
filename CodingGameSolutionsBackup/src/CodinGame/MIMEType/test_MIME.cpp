﻿
#include <gtest/gtest.h>
#include "MIME.h"

class test_MIME : public ::testing::Test
{
protected:
    MIME classFile;
    std::istringstream input;

    void SetUp() override
    {
    }
    int elements, elementsToAnalize;
    std::vector<std::string> sets;
};

TEST_F(test_MIME, SimpleExample)
{
    elements = 3;
    elementsToAnalize = 3;
    sets =
    {
        "html text/html","png image/png","gif image/gif", "animated.gif", "portrait.png", "index.html"
    };
    std::string result = classFile.ComputeInput(elements,elementsToAnalize, sets);
    EXPECT_EQ(result, "image/gif\nimage/png\ntext/html");
}

TEST_F(test_MIME, UnknowMYMETypes)
{
    elements = 3;
    elementsToAnalize = 4;
    sets =
    {
        "txt text/plain","xml text/xml","flv video/x-flv"
    };
    std::string result = classFile.ComputeInput(elements,elementsToAnalize, sets);
    EXPECT_EQ(result, "UNKNOWN\nvideo/x-flv\ntext/xml\ntext/plain");
}