#pragma once

namespace DB
{

/// Returns the square of the input. Called from CoverageTestFunctions.cpp → should appear as COVERED.
int coveredDemoFunction(int x);

/// Never called anywhere → should appear as UNCOVERED in the coverage report.
int uncoveredDemoFunction(int x);

}
