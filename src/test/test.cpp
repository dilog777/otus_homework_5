#include <gtest/gtest.h>



TEST(test_google_version, test_valid_build)
{
	EXPECT_TRUE(true);
}



int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
