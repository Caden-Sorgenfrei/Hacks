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

    printf("Please input latitude of first location\n");
    scanf("%lf", &aLat);

    printf("Please input longitude of first location\n");
    scanf("%lf", &aLong);

    printf("Please input latitude of second location\n");
    scanf("%lf", &bLat);

    printf("Please input longitude of second location\n");
    scanf("%lf", &bLong);

    radianALat = (aLat / 180) * M_PI;
    //printf("%lf\n", radianALat);

    radianALong = (aLong / 180) * M_PI;
    //printf("%lf\n", radianALong);

    radianBLat = (bLat / 180) * M_PI;
    //printf("%lf\n", radianBLat);

    radianBLong = (bLong / 180) * M_PI;
    //printf("%lf\n", radianBLong);

    sinLat = sin(radianALat) * sin(radianBLat);
    cosLat = cos(radianALat) * cos(radianBLat);
    
  return 0;
}