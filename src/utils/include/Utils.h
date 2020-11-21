#pragma once
#include <vector>
#include <map>
#include <unordered_map>
template <typename T> void Print (T val);

template <typename T> void Print (const std::vector<T>& container);

template <typename T1, typename T2> void Print (const std::map<T1,T2>& container);

template <typename T1, typename T2> void Print (const std::pair<T1,T2>& container);

template <typename T1, typename T2> void Print (const std::unordered_map<T1,T2>& container);

template <typename T>
void Print (T val)
{
	std::cerr << val;
}

template <typename T>
void Print (const std::vector<T>& container)
{
	for(const auto& item : container)
	{
		Print(item);
	        std::cerr << " ," ;
	}
}

template <typename T1, typename T2>
void Print (const std::map<T1,T2>& container)
{
	for(const auto& item : container)
	{
		std::cerr << "key : ";
		Print(item.first);
	        std::cerr << " , value : " ;
		Print(item.second);
		std::cerr << std::endl;
	}
}

template <typename T1, typename T2>
void Print (const std::pair<T1,T2>& container)
{
	std::cerr << "key : ";
	Print(container.first);
        std::cerr << " , value : " ;
	Print(container.second);
	std::cerr << std::endl;
}

template <typename T1, typename T2>
void Print (const std::unordered_map<T1,T2>& container)
{
	for(const auto& item : container)
	{
		std::cerr << "key : ";
		Print(item.first);
	        std::cerr << " , value : " ;
		Print(item.second);
		std::cerr << std::endl;
	}
}

