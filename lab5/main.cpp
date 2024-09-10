// #include <iostream>
// #include <queue>
// #include <vector>
// #include <algorithm>
// using namespace std;
// // Function to calculate median of queue elements
// double calculateMedian(std::queue<int>& q) {
//     vector<int> vec;
//     int size = q.size();

//     // Copy queue elements to a vector
//     for (int i = 0; i < size; i++) {
//         vec.push_back(q.front());
//         q.push(q.front());
//         q.pop();
//     }
//     // Sort the vector
//     sort(vec.begin(), vec.end());

//     // Calculate median
//     if (size % 2 == 0) {
//         // If size is even, median is the average of two middle elements
//         return (vec[size / 2 - 1] + vec[size / 2]) / 2.0;
//     } else {
//         // If size is odd, median is the middle element
//         return vec[size / 2];
//     }
// }
// int main() {
//     queue<int> q;

//     // Add elements to the queue
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     // Calculate and display median
//     double median = calculateMedian(q);
//     cout << "Median of queue elements: " << median << endl;

//     return 0;
// }



//Task 2
// #include <unordered_map>
// #include <queue>
// #include <iostream>
// using namespace std;

// // Function to calculate mode of queue elements
// int calculateMode(std::queue<int>& q) {
//     unordered_map<int, int> freq;
//     int max_freq = 0, max_mode = 0;

//     // Count frequency of each element
//     for (int i = 0; i < q.size(); i++) {
//         int elem = q.front();
//         freq[elem]++;
//         q.push(q.front());
//         q.pop();
//     }

//     // Find the element with highest frequency
//     for (auto& it : freq) {
//         if (it.second > max_freq) {
//             max_freq = it.second;
//             max_mode = it.first;
//         }
//     }

//     return max_mode;
// }
// int main() {
//     queue<int> q;
//     // Add elements to the queue
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(20);

//     // Calculate and display mode
//     int mode = calculateMode(q);
//     cout << "Mode of queue elements: " << mode << endl;

//     return 0;
// }

// Task 3
// #include <iostream>
// #include <queue>
// #include <cmath>
// using namespace std;

// double calculate_mean(const queue<int>& q) {
//     double sum = 0.0;
//     queue<int> temp = q;
//     int count = 0;

//     while (!temp.empty()) {
//         sum += temp.front();
//         temp.pop();
//         ++count;
//     }

//     return (count > 0) ? (sum / count) : 0.0;
// }

// double calculate_variance(const queue<int>& q, double mean) {
//     double sum_of_squares = 0.0;
//     queue<int> temp = q;
//     int count = 0;

//     while (!temp.empty()) {
//         double diff = temp.front() - mean;
//         sum_of_squares += diff * diff;
//         temp.pop();
//         ++count;
//     }

//     return (count > 0) ? (sum_of_squares / count) : 0.0;
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     double mean = calculate_mean(q);
//     double variance = calculate_variance(q, mean);
//     double standard_deviation = sqrt(variance);

//     cout << "Mean: " << mean << endl;
//     cout << "Variance: " << variance << endl;
//     cout << "Standard Deviation: " << standard_deviation << endl;
//     return 0;
// }

// //Task 4
// #include <iostream>
// #include <queue>
// #include <limits>  

// using namespace std;

// int find_maximum(const queue<int>& q) {
//     if (q.empty()) {
//         throw runtime_error("Queue is empty");
//     }

//     queue<int> temp = q; 

//     int max_element = numeric_limits<int>::min();

//     while (!temp.empty()) {
//         if (temp.front() > max_element) {
//             max_element = temp.front();
//         }
//         temp.pop();
//     }

//     return max_element;
// }

// int main() {
//     queue<int> q;

//     // Example elements in the queue
//     q.push(10);
//     q.push(20);
//     q.push(5);
//     q.push(40);
//     q.push(15);

//     try {
//         int max_element = find_maximum(q);
//         cout << "The maximum element in the queue is: " << max_element << endl;
//     } catch (const runtime_error& e) {
//         cerr << "Error: " << e.what() << endl;
//     }

//     return 0;
// }

// Task 5
// #include <iostream>
// #include <queue>
// #include <limits>  // For std::numeric_limits

// int find_minimum(const std::queue<int>& q) {
//     if (q.empty()) {
//         throw std::runtime_error("Queue is empty");
//     }

//     std::queue<int> temp = q;  // Copy the queue to preserve the original
//     int min_element = std::numeric_limits<int>::max();

//     while (!temp.empty()) {
//         if (temp.front() < min_element) {
//             min_element = temp.front();
//         }
//         temp.pop();
//     }

//     return min_element;
// }

// int main() {
//     std::queue<int> q;

//     // Example elements in the queue
//     q.push(10);
//     q.push(20);
//     q.push(5);
//     q.push(40);
//     q.push(15);

//     try {
//         int min_element = find_minimum(q);
//         std::cout << "The minimum element in the queue is: " << min_element << std::endl;
//     } catch (const std::runtime_error& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }

// 

// Task 7
// #include <iostream>
// #include <queue>
// #include <limits>

// using namespace std;

// int find_second_lowest(const queue<int>& q) {
//     if (q.size() < 2) {
//         throw runtime_error("Queue must contain at least two elements to find the second lowest element.");
//     }

//     int first_min = numeric_limits<int>::max();
//     int second_min = numeric_limits<int>::max();

//     queue<int> temp = q;

//     while (!temp.empty()) {
//         int current = temp.front();
//         temp.pop();

//         if (current < first_min) {
//             second_min = first_min;
//             first_min = current;
//         } else if (current < second_min && current > first_min) {
//             second_min = current;
//         }
//     }

//     if (second_min == numeric_limits<int>::max()) {
//         throw runtime_error("There is no second lowest element in the queue.");
//     }

//     return second_min;
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(5);
//     q.push(40);
//     q.push(15);
//     try {
//         int second_lowest = find_second_lowest(q);
//         cout << "The second lowest element in the queue is: " << second_lowest << endl;
//     } catch (const runtime_error& e) {
//         cerr << "Error: " << e.what() << endl;
//     }
//     return 0;
// }

// Task 8
// #include <iostream>
// #include <queue>

// using namespace std;

// void remove_element(queue<int>& q, int element_to_remove) {
//     queue<int> temp;  // Temporary queue to hold elements except the one to remove

//     while (!q.empty()) {
//         int current = q.front();
//         q.pop();

//         // Add to the temp queue if it's not the element to remove
//         if (current != element_to_remove) {
//             temp.push(current);
//         }
//     }

//     q = temp;
// }

// void print_queue(const queue<int>& q) {
//     queue<int> temp = q; 

//     while (!temp.empty()) {
//         cout << temp.front() << " ";
//         temp.pop();
//     }
//     cout << endl;
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(20);
//     q.push(50);
//     cout << "Original queue: ";
//     print_queue(q);
//     int element_to_remove = 20;
//     remove_element(q, element_to_remove);
//     cout << "Queue after removing " << element_to_remove << ": ";
//     print_queue(q);

//     return 0;
// }
// Task 9
// #include <iostream>
// #include <queue>

// using namespace std;

// void clear_queue(queue<int>& q) {
//     while (!q.empty()) {
//         q.pop();
//     }
// }

// void print_queue(const queue<int>& q) {
//     queue<int> temp = q;  

//     while (!temp.empty()) {
//         cout << temp.front() << " ";
//         temp.pop();
//     }
//     cout << endl;
// }

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     cout << "Original queue: ";
//     print_queue(q);

//     clear_queue(q);

//     if (q.empty()) {
//         cout << "The queue is now empty." << endl;
//     } else {
//         cout << "The queue is not empty." << endl;
//     }

//     return 0;
// }
// Task 10

#include <iostream>
#include <queue>

using namespace std;

void remove_even_elements(queue<int>& q) {
    queue<int> temp;  // Temporary queue to hold odd elements

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // Add to the temp queue only if the element is odd
        if (current % 2 != 0) {
            temp.push(current);
        }
    }

    // Assign the temp queue back to the original queue
    q = temp;
}

void print_queue(const queue<int>& q) {
    queue<int> temp = q;  // Copy the queue to preserve the original

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(21);
    q.push(32);
    q.push(43);
    q.push(54);
    q.push(65);

    cout << "Original queue: ";
    print_queue(q);

    remove_even_elements(q);
    cout << "Queue after removing even elements: ";
    print_queue(q);
    return 0;
}
