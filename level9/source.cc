#include <cstring>
#include <unistd.h>

class ZN1N{
public:
    ZN1N(int value) { this->n = value; }
    ZN1N operator+(ZN1N &rhs) { return ZN1N(rhs.n + this->n); }
    ZN1N operator-(ZN1N &rhs) { return ZN1N(this->n - rhs.n); }

    void setAnnotation(char *str)
    {
        size_t len;

        len = strlen(str);
        memcpy(this->str, str, len);
        return;
    }

    int n;
    char str[100];
};


int main(int argc, char **argv)
{
    int ret;

    if (argc < 2) {
        _exit(1);
    }

    ZN1N* a = new ZN1N(5);
    ZN1N* b = new ZN1N(6);

    a->setAnnotation(argv[1]);

    return (b->operator+(a)).n;
}