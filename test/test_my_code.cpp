// #include <gtest/gtest.h>
// #include "../src/my_code.cpp" // Include your header file that contains the class definitions.

// class VegBurgerTest : public ::testing::Test
// {
// protected:
//     // Setup any common test resources here, if needed.
//     void SetUp() override
//     {
//         // Initialize objects if necessary
//     }

//     void TearDown() override
//     {
//         // Clean up after tests if necessary
//     }
// };

// // Test case to check if the VegBurger object is created properly.
// TEST_F(VegBurgerTest, CreateVegBurger)
// {
//     VegBurger vegBurger;

//     // Capture the output of the create() method.
//     testing::internal::CaptureStdout();
//     vegBurger.create();

//     // Check if the correct message is printed.
//     std::string output = testing::internal::GetCapturedStdout();
//     EXPECT_EQ(output, "Created VegBurger!!!\n");
// }

// // Test case to check if the name() method returns the correct name.
// TEST_F(VegBurgerTest, NameOfVegBurger)
// {
//     VegBurger vegBurger;
//     EXPECT_EQ(vegBurger.name(), "Vegi burger");
// }

// // Main function to run all the tests.
// int main(int argc, char **argv)
// {
//     ::testing::InitGoogleTest(&argc, argv); // Initialize Google Test framework.
//     return RUN_ALL_TESTS();                 // Run all the tests.
// }

#include <gtest/gtest.h>
#include "../src/my_code.cpp"

TEST(FactoryTest, CircleCreation)
{
    ShapeFactory factory;
    Shape *shape = factory.getShape("circle");

    testing::internal::CaptureStdout();
    shape->draw();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Drawing Circle\n");
    EXPECT_EQ(shape->name(), "Circle");

    delete shape;
}

TEST(FactoryTest, RectangleCreation)
{
    ShapeFactory factory;
    Shape *shape = factory.getShape("rectangle");

    testing::internal::CaptureStdout();
    shape->draw();
    string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Drawing Rectangle\n");
    EXPECT_EQ(shape->name(), "Rectangle");

    delete shape;
}
