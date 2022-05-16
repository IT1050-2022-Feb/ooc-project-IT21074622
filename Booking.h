#include "movie.h"
using namespace std;

class Booking
{
private:
 int booking_ID;
 char booking_Date[20];
 double amount;

 Movie* movie;

public:
 Booking();
 Booking(int bID, const char bDate[], double amount);
 void searchBooking();
 void selectBooking();
 void addBooking();
 void editBooking();
 void deleteBooking();
};
