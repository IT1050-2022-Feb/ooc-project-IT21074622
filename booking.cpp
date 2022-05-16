#include "Booking.h"
#include <cstring>

Booking::Booking(){
  booking_ID = 0;
  strcpy_s(booking_Date, "");
  amount = 0;
}

Booking::Booking(int bID, const char bDate[], double amount){
  booking_ID = bID;
  strcpy_s(booking_Date, bDate);
  amount = amount;
}

void Booking::searchBooking()
{
}

void Booking::selectBooking()
{
}

void Booking::addBooking()
{
}

void Booking::editBooking()
{
}

void Booking::deleteBooking()
{
}