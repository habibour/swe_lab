#include <gtest/gtest.h>
#include <vector>
#include "my_code.h"

using namespace std;

class testFix : public testing::Test
{
public:
    Student *s;
    vector<float> vec = {1, 2, 3};

    void SetUp()
    {
        cout << "SETUP" << endl;
        s = new Student();
    }

    void TearDown()
    {
        s->~Student();
        cout << "TEARDOWN" << endl;
    }
};

// TEST(StudentTest, AvgTest) {
//     Student s;
//     vector<float> vec = {1, 2, 3};
//     float value = s.avg(vec);

//     EXPECT_TRUE(s.avg(vec) == 2);
//     EXPECT_FALSE(s.avg(vec) == 0);
//     EXPECT_EQ(s.avg(vec), 2);
//     EXPECT_EQ(s.avg(vec), 0);
//     EXPECT_NE(s.avg(vec), 0);
//     EXPECT_LT(s.avg(vec), 0);
//     EXPECT_LE(s.avg(vec), 0);
//     EXPECT_GT(s.avg(vec), 0);
//     EXPECT_GE(s.avg(vec), 0);
//     EXPECT_FLOAT_EQ(s.avg(vec), 0.0);
//     EXPECT_DOUBLE_EQ(s.avg(vec), 0.0);
//     EXPECT_NEAR(s.avg(vec), 0.0, 0.0001);
//     EXPECT_STREQ(s.avg(vec), "helo");
//     EXPECT_STRNE(s.avg(vec), "helo");
//     EXPECT_STRCASEEQ(s.avg(vec), "helo");
//     EXPECT_STRCASENE(s.avg(vec), "helo");

//     ASSERT_TRUE(s.avg(vec) == 2);
//     ASSERT_FALSE(s.avg(vec) == 0);
//     ASSERT_TRUE(s.avg(vec) == 2);
//     ASSERT_FALSE(s.avg(vec) == 0);
//     ASSERT_EQ(s.avg(vec), 0);
//     ASSERT_NE(s.avg(vec), 0);
//     ASSERT_LT(s.avg(vec), 0);
//     ASSERT_LE(s.avg(vec), 0);
//     ASSERT_GT(s.avg(vec), 0);
//     ASSERT_GE(s.avg(vec), 0);
//     ASSERT_FLOAT_EQ(s.avg(vec), 0.0);
//     ASSERT_DOUBLE_EQ(s.avg(vec), 0.0);
//     ASSERT_NEAR(s.avg(vec), 0.0, 0.0001);
//     ASSERT_STREQ(s.avg(vec), "helo");
//     ASSERT_STRNE(s.avg(vec), "helo");
//     ASSERT_STRCASEEQ(s.avg(vec), "helo");
//     ASSERT_STRCASENE(s.avg(vec), "helo");

// }

TEST_F(testFix, AvgTest)
{
    EXPECT_EQ(s->avg(vec), 2);
    EXPECT_EQ(s->avg(vec), 0);
    EXPECT_TRUE(s->avg(vec) == 2);
    EXPECT_FALSE(s->avg(vec) == 0);
    EXPECT_NE(s->avg(vec), 0);
    EXPECT_LT(s->avg(vec), 0);
    EXPECT_LE(s->avg(vec), 0);
    EXPECT_GT(s->avg(vec), 0);
    EXPECT_GE(s->avg(vec), 0);
    EXPECT_FLOAT_EQ(s->avg(vec), 0.0);
    EXPECT_DOUBLE_EQ(s->avg(vec), 0.0);
    EXPECT_NEAR(s->avg(vec), 0.0, 0.0001);
    // EXPECT_STREQ(s->avg(vec), "helo");
    // EXPECT_STRNE(s->avg(vec), "helo");
    // EXPECT_STRCASEEQ(s->avg(vec), "helo");
    // EXPECT_STRCASENE(s->avg(vec), "helo");

    ASSERT_TRUE(s->avg(vec) == 2);
    ASSERT_FALSE(s->avg(vec) == 0);
    ASSERT_TRUE(s->avg(vec) == 2);
    ASSERT_FALSE(s->avg(vec) == 0);
    ASSERT_EQ(s->avg(vec), 0);
    ASSERT_NE(s->avg(vec), 0);
    ASSERT_LT(s->avg(vec), 0);
    ASSERT_LE(s->avg(vec), 0);
    ASSERT_GT(s->avg(vec), 0);
    ASSERT_GE(s->avg(vec), 0);
    ASSERT_FLOAT_EQ(s->avg(vec), 0.0);
    ASSERT_DOUBLE_EQ(s->avg(vec), 0.0);
    ASSERT_NEAR(s->avg(vec), 0.0, 0.0001);
    // ASSERT_STREQ(s->avg(vec), "helo");
    // ASSERT_STRNE(s->avg(vec), "helo");
    // ASSERT_STRCASEEQ(s->avg(vec), "helo");
    // ASSERT_STRCASENE(s->avg(vec), "helo");
}

int main()
{
    testing::InitGoogleTest();
    int result = RUN_ALL_TESTS();
    return 0;
}

 write a test for the code in my_code.h and my_code.cpp
