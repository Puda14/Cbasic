#ifndef __MFILE_H__
#define __MFILE_H__

#include "data_t.h"
#include "llist.h"

//Ghi dữ liệu của một node ra File
void write2File(const char fname[],node_t* p, const int n);

// Trả về số phần tử đọc được
// Dữ liệu được chứa trong buf, buf phải được cấp phát trước ngoài hàm
int readFromFile(const char fn[], data_t buf[], int elemSize);

#endif