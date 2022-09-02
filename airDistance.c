/**
 * Author: Connor Licht , Caden Sorgenfrei
 *         connorlicht@unomaha.edu , csorgenfrei@unomaha.edu
 * Date: 2022/09/01
 *
 * A program to calculate distance
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    double aLat, bLat, aLong, bLong;
    double radianALat, radianALong, radianBLat, radianBLong;
    double sinLat, cosLat;
    int r = 6371;
    double cosDelta;


    printf("Please input latitude of first location\n");
    scanf("%lf", &aLat);
    printf("Please input longitude of first location\n");
    scanf("%lf", &aLong);
    printf("Please input latitude of second location\n");
    scanf("%lf", &bLat);
    printf("Please input longitude of second location\n");
    scanf("%lf", &bLong);


    //Converts degrees to radian
    radianALat = (aLat / 180) * M_PI;
    radianALong = (aLong / 180) * M_PI;
    radianBLat = (bLat / 180) * M_PI;
    radianBLong = (bLong / 180) * M_PI;

    //Calculations for later equations

    sinLat = sin(radianALat) * sin(radianBLat);
    cosLat = cos(radianALat) * cos(radianBLat);
    cosDelta = cos(radianBLong - radianALong);


    double distance;
    distance = acos(sinLat + ( cosLat * cosDelta )) * r ;



    // End Menu print screen

    printf("How far you have to go, enjoy\n");
        // Plus hell
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("You started at: (%lf , %lf)\n" , aLat , aLong );
    printf("Your destination is at: (%lf , %lf)\n", bLat , bLong);
    printf("Air Distnace: %lf kmsc\n", distance);


  return 0;
}