#include <thread>
#include <random>

#include "TaskBoard.h"
#include "ExpeditionTeam.h"
#include "HelpSeeker.h"

int randid() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1,100);
    return dis(gen);
}

int main() {
    ExpeditionTeam team1("LoveFromEevees", 4);
    ExpeditionTeam team2("RazorWind", 3);
    ExpeditionTeam team3("Skull", 5);

    HelpSeeker pm1("Mawile");
    HelpSeeker pm2("Poochyena");



    std::thread producer_th1([&] {
        for (int i = 0; i < 50; i++) {
            pm1.sendTask(randid());
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    });
    std::thread producer_th2([&] {
        for (int i = 0; i < 50; i++) {
            pm2.sendTask(randid());
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    });
    std::this_thread::sleep_for(std::chrono::seconds(3));

    std::thread consumer_th1(&ExpeditionTeam::startWorking, &team1);
    std::thread consumer_th2(&ExpeditionTeam::startWorking, &team2);
    std::thread consumer_th3(&ExpeditionTeam::startWorking, &team3);

    producer_th1.join();
    producer_th2.join();
    consumer_th1.join();
    consumer_th2.join();
    consumer_th3.join();

    return 0;
}