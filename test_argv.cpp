#include "argv.h"

int main(int argc, const char *argv[]) {
    PARM(int, n, "Number of elements", "1");
    PARM(double, k, "Constant", "3.14");
    PARM(std::string, name, "Name of element", "");

    parse_argv("testparms", argc, argv);

    printf("n = %i\n"
           "k = %.18g\n"
           "name = '%s'\n",
           n, k, name.c_str());

    return 0;
}
