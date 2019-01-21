#pragma once
#include <map>
#include <string>
#include <mutex>
#include "inout.h"

struct t_file_stats {
	unsigned long long matchingDeadlines;
	unsigned long long conflictingDeadlines;
	unsigned long long readErrors;
};

extern std::map<std::string, t_file_stats> fileStats;
extern bool showCorruptedPlotFiles;

void increaseMatchingDeadline(std::string file);
void increaseConflictingDeadline(std::string file);
void increaseReadError(std::string file);
void printFileStats();