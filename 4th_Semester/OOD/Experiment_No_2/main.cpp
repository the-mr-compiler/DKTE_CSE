#include "movieHouse.h"
#include "movieHouseOperations.h"
#include "malloc.h"

int main(){
    struct MovieHouse *movieHouse;
    movieHouse=(struct MovieHouse*)malloc(sizeof(struct MovieHouse));
    setMovieHouseData(movieHouse);
    generateReport(*movieHouse);
}