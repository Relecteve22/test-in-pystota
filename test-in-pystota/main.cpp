#include <Magick++.h>
#include <iostream>

int main(int argc, char **argv)
{
    Magick::InitializeMagick(*argv);

    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <input> <output>" << std::endl;
        return 1;
    }

    try {
        Image image;
        image.read(argv[1]);

        image.flop(); // Отзеркаливание по горизонтали

        image.write(argv[2]);

        std::cout << "Saved mirrored image to " << argv[2] << std::endl;
    }
    catch (Exception &error_) {
        std::cerr << "Caught exception: " << error_.what() << std::endl;
        return 1;
    }

    return 0;
}
