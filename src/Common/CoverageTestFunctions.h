#pragma once

namespace DB
{

/// Called from Exception.cpp — appears as COVERED in the LLVM coverage report.
/// Used to verify that newly covered code detection works correctly.
inline int coveredDemoFunction(int x)
{
    return x + 1;
}

/// Never called anywhere — appears as UNCOVERED in the diff coverage report.
/// Used to verify that uncovered changed-line detection works correctly.
inline int uncoveredDemoFunction(int x)
{
    return x * 2;
}

}
