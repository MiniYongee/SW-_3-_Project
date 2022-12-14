#pragma once

#define Market_WIDTH 35
#define Market_HEIGHT 26
#define Market_ORIGIN_X 60
#define Market_ORIGIN_Y 14
clock_t start;
clock_t warrenStart; // 업적 측정을 위한 시작 시간

int distance = 0;//비거리에 따른 거래소 호출을 위해 호출
int coin;
int seed;
int warrenSeed; // 업적 측정을 위한 최초의 시드 머니
char name[10]; // 플레이어 이름
int level; // 선택된 난이도
double life = 100.0;
double rate = 0; //수익률
int total; // 환산된 금액 + 코인
double time_s; // 생존시간


int cash_id = 0; // 0 ~ 3
int cashX = 60, cashY = 20;// 초기 값
int antY; // 개미출력 시작부분(y좌표)
int pre_ant = 26; //  개미의 바로 이전 위치 (y좌표)
int speed = 10; 
int bomb_id = 0;
int bombX = 60, bombY = 30;// 초기 값
int cashColor = 1; // 랜덤아이템
int hurdleX = 60, hurdleY = 31;
int hurdle_id = 2;
int pur_heart = 5000; // 생명력 구매가
int text_x, text_y;
int htext_x, htext_y; //hurdle


int StockMarketTime = 200;//거래소 들어갈 때까지 남은 시간 
char EventList1[40][60];//특정 종목 관련
char EventList2[30][30];//전체 주가 관련
char StockList[5][30];//종목 종류
int PriceList[5];//각 종목의 주가
int QuantityList[5];//각 종목의 보유량
int BeforePrice[5];//거래소에서 전 주가


int achieve = 0; // 총 달성 갯수