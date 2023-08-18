//Job.cpp
#include "Job.h"
#include "Purse.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

Job::Job() :Purse() {
	srand(time(NULL));
	moneyJob = rand() % 41 - 10;
}

Job::Job(int number) : Purse(number) {
	srand(time(NULL));
	moneyJob = rand() % 41 - 10;
}

Job::~Job() {

}

int Job::GetMoneyJob() {
	return moneyJob;
}

int Job::AddMoneyJob() {
	money = money + moneyJob;
	return money;
}

int Job::AutorJob(int count) {
	money = money + count;
	return money;
}