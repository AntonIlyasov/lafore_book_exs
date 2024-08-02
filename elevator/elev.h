// elev.h
// ������������ ���� ��� ������ - �������� ���������� �������

#include "elev_app.h"  // ������������ �������� (������������)                   
#include "msoftcon.h"  // ��� ���������� �������
#include <iostream>
#include <iomanip>     // ��� setw()
#include <conio.h>     // ��� ������ �� �����
#include <stdlib.h>    // ��� itoa()
#include <process.h>   // ��� exit()
using namespace std;

enum direction { UP, DN, STOP };
const int LOAD_TIME =   3;     // ����� �������/������� 
							   // (� tick'��)				   
const int SPACING =     7;     // ���������� �����                           
							   // ������������� �������	   
const int BUF_LENGTH =  80;    // ����� ������ ������� ������
							   
class building;                // ������� ����������
///////////////////////////////////////////////////////////
class elevator
{
private:
	building* ptrBuilding;     // ��������� �� building
	const int car_number;      // ����� ����� (�� 0 �� nc-1)
	int current_floor;         // ��� ��? (�� 0 �� nf-1)
	int old_floor;             // ���� ����? (�� 0 �� nf-1)
	direction current_dir;          // � ����� �����������?
	bool destination[NUM_FLOORS];   // ���������� �����������
	int loading_timer;         // ��������� �� ����� �������
	int unloading_timer;       // ��������� �� ����� �������

public:
	elevator(building*, int);  // �����������
	void car_tick1();          // ��������-1 ��� ������ �������
	void car_tick2();          // ��������-2 ��� ������ �������
	void car_display();        // ��������� �����
	void dests_display() const;// ����� ��������
	void decide();             // �������� �������
	void move();               // �������� �����
	void get_destinations();   // ��������� ������� �������� ������                    
	int get_floor() const;          // ��������� �������� �����
	direction get_direction() const;// ��������� �������� �����������
};
///////////////////////////////////////////////////////////
class building
{
private:
	elevator* car_list[NUM_CARS];  // ��������� �� �������
	int num_cars;                  // ��� ��������� �����

	// ������ ������ �������, �����
	bool floor_request[2][NUM_FLOORS];// false = �����, true = ����

public:
	building();              // �����������
	~building();             // ����������
	void master_tick();      // �������� ��������� ����� ����                 
							 // ������
	int get_cars_floor(const int) const; // ����� �����

	// ��������� ����������� ��������
	direction get_cars_dir(const int) const;  

	// �������� ������� � �����
	bool get_floor_req(const int, const int) const;

	// ��������� ������� � �����
	void set_floor_req(const int, const int, const bool); 
	void record_floor_reqs();      // ��������� ������� � �����
	void show_floor_reqs() const;  // ����� �������
};
///////////////////////////////////////////////////////////