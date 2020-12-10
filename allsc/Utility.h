#ifndef _UTILITY_H_
#define _UTILITY_H_

#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif

#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <queue>
#include <set>

typedef unsigned int ui;

#define _LINUX_
//#define _DEBUG_

#ifdef _LINUX_
	#include <sys/time.h>
#endif

FILE *open_file(const char *file_name, const char *mode) ;

#endif
