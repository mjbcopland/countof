#pragma once
template<typename T, size_t N> constexpr size_t countof(const T(&)[N]) { return N; }