/****************************************************************************************
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Logger {
	int logCount;
public:
	Logger() : logCount(0) {};

	void logInfo(string message) {
		logCount++;
		cout << "[INFO]: " << message << endl;
	};

	void logWarning(string message) {
		logCount++;
		cout << "[WARNING]: " << message << endl;
	};

	void logError(string message) {
		logCount++;
		cout << "[ERROR]: " << message << endl;
	};

	void showTotalLogs() {
		cout << "Total logs: " << logCount << endl;
	};

	~Logger() {
		cout << "Logger destroyed." << endl;
	}
};

int main() {
	unique_ptr<Logger> logger = make_unique<Logger>();

	logger->logInfo("System is starting.");
	logger->logWarning("Low disk space.");
	logger->logError("Unable to connect to the server.");

	logger->showTotalLogs();

	return 0;
}
****************************************************************************************/