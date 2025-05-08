#include <iostream>
#include <vector>

void simulateGrid(int nodes, double timeStep) {
    std::vector<double> voltages(nodes, 0.0);
    for (int i = 0; i < nodes; ++i) {
        voltages[i] = 220.0;  // Default voltage
    }
    std::cout << "Simulation complete for " << nodes << " nodes." << std::endl;
}

int main() {
    simulateGrid(10, 0.01);
    return 0;
}
