#include <iostream>
#include <fstream>
#include <string>
#include <curl/curl.h>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

int main() {
    std::ifstream file("URLs.txt");
    std::string line;
    int A = 0;
    std::string HTML[10];

    if (file.is_open()) {
        while (getline(file, line)) {
          HTML[A] = line;
          A += 1;
        }
        file.close();
    } else {
        std::cerr << "Ошибка при открытии файла\n";
    }

    for (size_t i = 0; i < A; i++) {
      std::string currURL = HTML[i];
      CURL* curl;
      CURLcode res;
        std::string html;

        curl_global_init(CURL_GLOBAL_DEFAULT);
        curl = curl_easy_init();

        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, currURL);
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &html);

            res = curl_easy_perform(curl);

            if (res == CURLE_OK) {

                std::ofstream file(currURL + ".html");

                if (file.is_open()) {
                    file << html << std::endl;
                    file.close();
                } else {
                    std::cerr << "Не удалось открыть файл для записи\n";
                }
            } else {
                std::cerr << "Ошибка: " << curl_easy_strerror(res) << std::endl;
            }

            curl_easy_cleanup(curl);
        }

        curl_global_cleanup();

    }

    return 0;
}
