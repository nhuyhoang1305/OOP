#include "src/lib/Bai1/Class.h"

#include <iostream>
#include <string>

#include "gtest/gtest.h"

TEST(InformationTest, ReturnInformation)
{
  Person p1("Nguyen Van A", "Ha Noi", "A202");
  std::string actual = p1.toString();
  std::string expected = "Name: Nguyen Van A\nAddress: Ha Noi\nDepartment: A202\n";
  EXPECT_EQ(expected, actual);

  Student s1("Nguyen Van B", "Ha Noi", "B202", "K62CB");
  std::string actual_1 = s1.toString();
  std::string expected_1 = "Name: Nguyen Van B\nAddress: Ha Noi\nDepartment: B202\nClass: K62CB\n";
  EXPECT_EQ(expected_1, actual_1);

  Teacher t1("Nguyen Van C", "Ha Noi", "C202", "Thac Si");
  std::string actual_2 = t1.toString();
  std::string expected_2 = "Name: Nguyen Van C\nAddress: Ha Noi\nDepartment: C202\nRank: Thac Si\n";
  EXPECT_EQ(expected_2, actual_2);
}

