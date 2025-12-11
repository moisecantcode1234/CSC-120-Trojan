#include <iostream>

#if __has_include(<filesystem>)
#include <filesystem>
#if defined(__cpp_lib_filesystem)
// prefer std::filesystem when the feature-test macro indicates availability
namespace fs = std::filesystem;
#else
// Some implementations ship a <filesystem> header but put the APIs in std::experimental;
// try to include experimental header as a fallback.
#if __has_include(<experimental/filesystem>)
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#error "Header <filesystem> is available but std::filesystem is not; try compiling with -lstdc++fs or use a newer standard library"
#endif
#endif
#elif __has_include(<experimental/filesystem>)
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#error "No filesystem support: your compiler/library does not provide <filesystem> or <experimental/filesystem>"
#endif

int main ()
{
    std::cout << fs::current_path() << std::endl;
    return 0;
}