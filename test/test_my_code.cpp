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
#include "../src/my_code.cpp" // Include your adapter pattern implementation

class AudioPlayerTest : public ::testing::Test
{
protected:
    void SetUp() override {}
    void TearDown() override {}
};

// Test for playing mp3
TEST_F(AudioPlayerTest, PlayMp3File)
{
    AudioPlayer player;

    testing::internal::CaptureStdout();
    player.play("mp3", "song.mp3");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Playing mp3 file. Name: song.mp3\n");
}

// Test for playing mp4 via adapter
TEST_F(AudioPlayerTest, PlayMp4File)
{
    AudioPlayer player;

    testing::internal::CaptureStdout();
    player.play("mp4", "video.mp4");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Playing mp4 file. Name: video.mp4\n");
}

// Test for playing vlc via adapter
TEST_F(AudioPlayerTest, PlayVlcFile)
{
    AudioPlayer player;

    testing::internal::CaptureStdout();
    player.play("vlc", "movie.vlc");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Playing vlc file. Name: movie.vlc\n");
}

// Test for unsupported format
TEST_F(AudioPlayerTest, PlayUnsupportedFormat)
{
    AudioPlayer player;

    testing::internal::CaptureStdout();
    player.play("avi", "clip.avi");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Invalid media. avi format not supported\n");
}

// Main function to run all tests
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
