#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>
#include <stdexcept>

class Statistics {
public:
    Statistics(const std::vector<double>& data) : data_(data) {
        if (data_.empty()) {
            throw std::invalid_argument("Data vector is empty");
        }
    }

    double mean() const {
        return std::accumulate(data_.begin(), data_.end(), 0.0) / data_.size();
    }

    double median() const {
        std::vector<double> sorted_data = data_;
        std::sort(sorted_data.begin(), sorted_data.end());
        size_t n = sorted_data.size();
        if (n % 2 == 0) {
            return (sorted_data[n / 2 - 1] + sorted_data[n / 2]) / 2.0;
        } else {
            return sorted_data[n / 2];
        }
    }

    double variance() const {
        double m = mean();
        double var = 0.0;
        for (double x : data_) {
            var += (x - m) * (x - m);
        }
        return var / data_.size();
    }

    double standard_deviation() const {
        return std::sqrt(variance());
    }

    double min() const {
        return *std::min_element(data_.begin(), data_.end());
    }

    double max() const {
        return *std::max_element(data_.begin(), data_.end());
    }

private:
    std::vector<double> data_;
};
