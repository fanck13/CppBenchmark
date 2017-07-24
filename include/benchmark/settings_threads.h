/*!
    \file settings_threads.h
    \brief Threads benchmark settings definition
    \author Ivan Shynkarenka
    \date 21.07.2015
    \copyright MIT License
*/

#ifndef CPPBENCHMARK_SETTINGS_THREADS_H
#define CPPBENCHMARK_SETTINGS_THREADS_H

#include "benchmark/settings.h"

namespace CppBenchmark {

//! Threads benchmark settings
/*!
    Constructs benchmark settings by providing count of iterations and count of running threads.
*/
class SettingsThreads : public Settings
{
public:
    //! Initialize settings with the given count of iterations
    /*!
        \param iterations - Count of iterations (default is 1)
    */
    SettingsThreads(int64_t iterations = 1) : Settings(iterations) {}
    //! Initialize settings with the given count of iterations and count of running threads
    /*!
        \param iterations - Count of iterations
        \param threads - Count of running threads
    */
    SettingsThreads(int64_t iterations, int threads) : SettingsThreads(iterations) { Threads(threads); }
    SettingsThreads(const Settings& settings) : Settings(settings) {}
    SettingsThreads(const SettingsThreads&) = default;
    SettingsThreads(Settings&& settings) noexcept : Settings(std::move(settings)) {}
    SettingsThreads(SettingsThreads&&) noexcept = default;
    ~SettingsThreads() = default;

    SettingsThreads& operator=(const SettingsThreads&) = default;
    SettingsThreads& operator=(SettingsThreads&&) noexcept = default;
};

} // namespace CppBenchmark

#endif // CPPBENCHMARK_SETTINGS_THREADS_H
