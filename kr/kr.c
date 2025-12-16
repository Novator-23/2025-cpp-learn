#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int year;
}Wonder;

typedef struct {
    char* name;
    char* country;
    Wonder** wonders;
    int count;
}City;

void init_wonder(Wonder* ptr, char* name, int year) {
    ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
    strcpy(ptr->name, name);
    ptr->year = year;
}

void init_city(City* ptr, char* name, char* country) {
    ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
    if (ptr->name == NULL) {
        printf("Error with memory");
    }
    strcpy(ptr->name, name);
    ptr->country = malloc(sizeof(char) * (strlen(country) + 1));
    if (ptr->country == NULL) {
        printf("Error with memory");
    }
    strcpy(ptr->country, country);
    ptr->count = 0;
    ptr->wonders = NULL;
}

void add_wonder(City* city_ptr, Wonder* wond_ptr) {
    city_ptr->count++;
    city_ptr->wonders = realloc(city_ptr->wonders, sizeof(Wonder*) * (city_ptr->count));
    city_ptr->wonders[(city_ptr->count)-1] = wond_ptr;
}

void free_all(City* city) {
    if (city != NULL){
        free(city->name);
        free(city->country);
        city->name = NULL;
        city->country = NULL;
        for (int i = 0; i < city->count; i++) {
            Wonder* tmp = city->wonders[i];
            free(tmp->name);
            tmp->name = NULL;
        }
        free(city->wonders);
    }
}

void max_count(City** cities, int num) {
    int maximum = 0;
    City* city = NULL;
    for (int i = 0; i < num; i++) {
        City* temp = cities[i];
        if (temp->count > maximum) {
            maximum = temp->count;
            city = temp;
        }
    }
    printf("%s \n", city->name);
}

void print_all(City** cities, int num) {
    for (int i = 0; i < num; i++) {
        City* current_city = cities[i];
        printf("%s : %s \n", current_city->country, current_city->name);
        for (int j = 0; j < current_city->count; j++) {
            Wonder* temp = current_city->wonders[j];
            printf("%s - %d \n", temp->name, temp->year);
        }
        printf("\n");
    }
}


int main(int argc, char** argv)
{
    Wonder wonder_1;
    Wonder wonder_2;
    Wonder wonder_3;
    init_wonder(&wonder_1, "wond_1", 10);
    init_wonder(&wonder_2, "wond_2", 11);
    init_wonder(&wonder_3, "wond_3", 12);
    City city_1;
    City city_2;
    init_city(&city_1, "city_1", "country_1");
    init_city(&city_2, "city_2", "country_2");
    add_wonder(&city_1, &wonder_1);
    add_wonder(&city_2, &wonder_2);
    add_wonder(&city_2, &wonder_3);
    City* cities[2] = {&city_1, &city_2};
    printf("Крупнейший город: ");
    max_count(cities, 2);
    print_all(cities, 2);
    free_all(&city_1);
    free_all(&city_2);
    return 0;
}