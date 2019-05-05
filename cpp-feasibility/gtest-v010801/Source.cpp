#include <gtest/gtest.h>

TEST(FooTest181, MethodBarDoesAbc) {
	int num = 23;
	EXPECT_EQ(23, num);
}

// Xyz を行う Foo をテストします．
TEST(FooTest181, DoesXyz) {
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}