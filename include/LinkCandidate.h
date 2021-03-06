#ifndef _LINK_CANDIDATE_
#define _LINK_CANDIDATE_
#include "Candidate.h"
#include "LinkCandidateUtil.h"
#include "head.h"
#include <math.h>
#include <vector>
using namespace cv;

class LinkCandidate{
public:
	LinkCandidate(){
		//this->Iq = new Iqueue;
		//relation = std::vector< std::vector<bool> >(3000,std::vector<bool>(3000,true));
	}
	std:: vector<Rect> run(std::vector<Candidate>& allCandidate, int &max_y,int &min_y, int&max_x, int&min_x);
	void findPairRegion(int i, int j, std::vector<Candidate> &candidateStore,std::vector< std::vector<bool> > &relation);
	void finalresult( std::vector<Candidate> &candidateStore,std::vector< std::vector<bool> > &relation, vector<cv::Rect> &cgtsi, int &max_y,int &min_y, int&max_x, int &min_x);
	void link( std::vector<Candidate> &candidateStore,std::vector< std::vector<bool> > &relation);
	//存储连接起来的区域的上下左右边界
	//int max_y;
	//int min_y;
	//int max_x;
	//int min_x;
private:
//	std::vector<Candidate> candidateStore;
	//int CandidateNum;
	//std::vector< std::vector<bool> > relation;
	//Iqueue* Iq;
	//vector<cv::Rect> cgts;
};

#endif
