//Job.h
#pragma once
#include "Purse.h"

class Job :public Purse {
public:
	Job();
	Job(int);
	virtual ~Job();
	int AddMoneyJob();
	int GetMoneyJob();
	int AutorJob(int count);
protected:
	int moneyJob;
};

