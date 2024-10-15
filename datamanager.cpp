#include "DataManager.h"
#include <iostream>

void DataManager::addData(const std::string& data) {
    dataStorage.push_back(data);
}

void DataManager::displayData() const {
    for (const auto& data : dataStorage) {
        std::cout << data << std::endl;
    }
}
