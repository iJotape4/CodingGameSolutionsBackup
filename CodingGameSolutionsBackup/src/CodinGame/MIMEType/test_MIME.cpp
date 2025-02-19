
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

TEST_F(test_MIME, test01)
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

