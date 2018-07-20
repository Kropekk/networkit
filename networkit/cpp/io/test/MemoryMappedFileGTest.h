/*
* MemoryMappedFileGTest.h
*
*  Created on: 28.07.2018
*      Author: Manuel Penschuck (networkit@manuel.jetzt)
*/

#ifndef MEMORY_MAPPED_FILE_GTEST_H_
#define MEMORY_MAPPED_FILE_GTEST_H_

#include <gtest/gtest.h>
#include <cstddef>

namespace NetworKit {

class MemoryMappedFileGTest : public ::testing::TestWithParam<size_t> {

};

} // namespace NetworKit

#endif // ! MEMORY_MAPPED_FILE_GTEST_H_
