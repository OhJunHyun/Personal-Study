#include <iostream>
using namespace std;

int main() {
	//�������� = ���� ����(���� * ���� ����)�� ���� ������ �������� ���� ��
	//p�� ����

	string subject; //���� ��
	float score; //����
	string grade; //����
	string grades[] = { "A+", "A0", "B+","B0", "C+","C0","D+","D0","F" };
	int i = 20;

	float p_grade = 0;
	float temp = 0;
	float scores = 0;

	while (i > 0) {
		cin >> subject >> score >> grade;
		if (grade == "A+") {
			temp = 4.5;
			scores += score;
		}
		else if (grade == "A0") {
			temp = 4.0;
			scores += score;
		}
		else if (grade == "B+") {
			temp = 3.5;
			scores += score;
		}
		else if (grade == "B0") {
			temp = 3.0;
			scores += score;
		}
		else if (grade == "C+") {
			temp = 2.5;
			scores += score;
		}
		else if (grade == "C0") {
			temp = 2.0;
			scores += score;
		}
		else if (grade == "D+") {
			temp = 1.5;
			scores += score;
		}
		else if (grade == "D0") {
			temp = 1.0;
			scores += score;
		}
		else if (grade == "F") {
			temp = 0;
			scores += score;
		}
		else {
			temp = 0;
		}

		
		p_grade += (score * temp);
		i--;

	}
	printf("%.6f", p_grade / scores);
	return 0;
}