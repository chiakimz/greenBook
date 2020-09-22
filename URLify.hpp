#pragma once

class Urlify {
public:
	void urlify(std::string& input, const int num);

private:
	int space_count(const std::string input, const int num);
};