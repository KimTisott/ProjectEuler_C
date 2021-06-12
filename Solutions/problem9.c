#define SUM 1000

#include <math.h>

unsigned long long problem9()
{
    unsigned long long result = 0, sum = SUM, a, b, c, limit = sqrt(sum >> 1), x, y, z;

    for (unsigned long long i = 2; i <= limit; i++)
    {
        if ((sum >> 1) % i == 0)
        {
            x = i + (i % 2) + 1;

            while (x < 2 * i && x <= sum / (i << 1))
            {
                if (sum / (i << 1) % x == 0 && gcd(x, i))
                {
                    z = (sum >> 1) / (x * i);

                    y = x - i;

                    a = (z * y * i) << 1;

                    b = z * (i * i - y * y);

                    c = z * (i * i + y * y);

                    result = a * b * c;

                    break;
                }

                x += 2;
            }
        }

        if (result)
        {
            break;
        }
    }

    return result;
}