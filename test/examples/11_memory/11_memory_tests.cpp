#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

// TEST_CASE("Test my vector capacity") {
// 	Vector v(3);
// 	REQUIRE(v.Capacity() == 3);
// }

// TEST_CASE("Test create Vector v1 from existing v") {
// 	Vector v(3);
// 	Vector v1 = v;

// 	REQUIRE(v1.Size() == v.Size());
// 	REQUIRE(v1.Capacity() == v.Capacity());
// }

// TEST_CASE("Test my vector create 2 vectors v v1 overwrite v1 with v") {
// 	Vector v(3);
// 	Vector v1(3);
// 	v1 = v;
// }

// TEST_CASE("Test moving v into v1") {
// 	Vector v(3);
// 	Vector v1 = std::move(v);
// }

TEST_CASE("Overwrite existing vector with a value return vector function") {
	Vector v1(3);
	v1 = get_vector();
}