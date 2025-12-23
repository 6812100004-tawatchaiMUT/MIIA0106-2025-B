#include <iostream>
#include <string>
#include <cstdlib> // สำหรับฟังก์ชั่น rand() และ srand()
#include <ctime>  // สำหรับฟังก์ชั่น Time()

using namespace std;

int main()
{
	// ตั้งค่า Seed สำหรับการสุ่ม (เพื่อให้เปลี่ยนไปทุกครั้งที่รันโปรแกรม)
	srand(time(0));
	// rand() % 100 จะได้ค่า 0-99 ดังนั้นต้อง +1 เพื่อให้ได้ 1-100
	int secretNumber = (rand() % 100) + 1;
	int guess;
	int attempts = 0;
	const int maxAttempts = 10;

	cout << "---- Guess what number it is (1-100) ----\n";
	cout << "** Rules: You only have one chance to guess." << maxAttempts << " Round **\n";
	//วนลูปให้ผู้ใช้ทายจนกว่าจะถูก
	do {
		cout << "Guess your number: \n";
		cin >> guess;

		if (guess < 1 || guess > 100)
		{
			cout << ">> Incorrect! please enter numbers between 1 and 100 only. <<\n";
			continue;// คำสั่ง continue จะข้ามโค๊ตด้านล่างแล้ววนกลับไปเริ่มรับค่าใหม่ทันที
		}
		attempts++; // นับจำนวนครั้งที่ทาย

		// ส่วนที่ให้เกมส์จบเมื่อทายถูกหรือครบจำนวนครั้ง
		if (guess == secretNumber)
		{
			cout << "That's correct! The secret number is... " << secretNumber << "\n";
			cout << "You guessed them all. " << attempts << "round(s).\n";
			break; // ออกจากลูปเมื่อทายถูก
		}

		// ตรวจสอบว่าผู้ใช้ทายเกินจำนวนครั้งที่กำหนดหรือไม่
		if (attempts >= maxAttempts)
		{
			cout << ">> Game Over! You've used all your attempts. The secret number was " << secretNumber << ". <<\n";
			break; // ออกจากลูปเมื่อครบจำนวนครั้ง
		}

		// ให้คำใบ้ผู้ใช้ว่าทายสูงหรือต่ำเกินไป
		if (guess < secretNumber)
		{
			cout << ">> Too low! Try again. <<\n";
		}
		else
		{
			cout << ">> Too high! Try again. <<\n";
		}

	} while (true);
	cout << "=== end game ===\n";


	return 0;
}