/*
 * Program: Closest Flight Departure Finder
 * ----------------------------------------
 * This C program allows a user to input a 24-hour time and finds the closest
 * scheduled flight departure time from a predefined list of 8 flights.
 * It calculates how close the user's input is to each departure time
 * and returns the closest departure and its corresponding arrival time.
 */

#include <stdio.h>

int main() {
    int hour, minute, user_time;

    // Define flight departure and arrival times in minutes since midnight
    int dep1 = 8 * 60,       arr1 = 10 * 60 + 16;
    int dep2 = 9 * 60 + 43,  arr2 = 11 * 60 + 52;
    int dep3 = 11 * 60 + 19, arr3 = 13 * 60 + 31;
    int dep4 = 12 * 60 + 47, arr4 = 15 * 60;
    int dep5 = 14 * 60,      arr5 = 16 * 60 + 8;
    int dep6 = 15 * 60 + 45, arr6 = 17 * 60 + 55;
    int dep7 = 19 * 60,      arr7 = 21 * 60;
    int dep8 = 21 * 60 + 45, arr8 = 23 * 60 + 58;

    // Prompt user to input time in HH:MM format
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    // Convert the user time into total minutes since midnight
    user_time = hour * 60 + minute;

    // Initialize closest departure with first flight
    int closest_dep = dep1, closest_arr = arr1;
    int min_diff = (user_time > dep1) ? user_time - dep1 : dep1 - user_time;

    // Compare user time with each flight and update the closest one
    if ((user_time > dep2 ? user_time - dep2 : dep2 - user_time) < min_diff) {
        closest_dep = dep2; closest_arr = arr2;
        min_diff = (user_time > dep2) ? user_time - dep2 : dep2 - user_time;
    }
    if ((user_time > dep3 ? user_time - dep3 : dep3 - user_time) < min_diff) {
        closest_dep = dep3; closest_arr = arr3;
        min_diff = (user_time > dep3) ? user_time - dep3 : dep3 - user_time;
    }
    if ((user_time > dep4 ? user_time - dep4 : dep4 - user_time) < min_diff) {
        closest_dep = dep4; closest_arr = arr4;
        min_diff = (user_time > dep4) ? user_time - dep4 : dep4 - user_time;
    }
    if ((user_time > dep5 ? user_time - dep5 : dep5 - user_time) < min_diff) {
        closest_dep = dep5; closest_arr = arr5;
        min_diff = (user_time > dep5) ? user_time - dep5 : dep5 - user_time;
    }
    if ((user_time > dep6 ? user_time - dep6 : dep6 - user_time) < min_diff) {
        closest_dep = dep6; closest_arr = arr6;
        min_diff = (user_time > dep6) ? user_time - dep6 : dep6 - user_time;
    }
    if ((user_time > dep7 ? user_time - dep7 : dep7 - user_time) < min_diff) {
        closest_dep = dep7; closest_arr = arr7;
        min_diff = (user_time > dep7) ? user_time - dep7 : dep7 - user_time;
    }
    if ((user_time > dep8 ? user_time - dep8 : dep8 - user_time) < min_diff) {
        closest_dep = dep8; closest_arr = arr8;
        // No need to update min_diff since this is the last flight
    }

    // Output the result in HH:MM format with leading zeros
    printf("Closest departure time is %d:%02d, arriving at %d:%02d\n",
           closest_dep / 60, closest_dep % 60,
           closest_arr / 60, closest_arr % 60);

    return 0;
}
