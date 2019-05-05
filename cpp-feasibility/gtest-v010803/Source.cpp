#include <gtest/gtest.h>

TEST(FooTest183, MethodBarDoesAbc) {
	int num = 23;
	EXPECT_EQ(23, num);
}

// Xyz を行う Foo をテストします．
TEST(FooTest183, DoesXyz) {
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}