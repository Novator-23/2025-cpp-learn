#include <stdio.h>

void check_prime(unsigned long long n) {
    if (n == 2) {
        printf("prime");
        return;
    }
    if (n < 2 || n % 2 == 0) {
        printf("composite");
        return;
    }

    for (unsigned long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            printf("composite");
            return;
        }
    }
    printf("prime");
}

int main()
{
    unsigned long long a;
    scanf("%llu", &a);
    check_prime(a);
    return 0;
}
//Григорий Анатольевич, купите мне билет обратно в Краснодар, я хочу домой, к маме. но если у меня будет незачет по проге,
// меня выгонят спать на улицу.... а там холодно. + такого красавчика могут украсть, а я у мамы один
// Вы когда-нибудь задумывались над тем, есть ли у ПОДКОРЫТОВА КОРЫТО?
//КУПИТЕ МАШЕ ПИРАТСКИЙ КОРАБЛЬ!!!!! пожааааааааалуйста, я буду хорошим мальчиком by Маша Спицина
