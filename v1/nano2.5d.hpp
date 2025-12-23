#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <string>
#include <vector>

namespace nano {
    struct object {
        int x = 10; int y = 5;

        std::vector<std::string> shape = {
            "###",
            "@!@",
            "@!&"
        };

        void draw() {
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

            for (int i = 0; i < shape.size(); i++) {
                COORD pos;
                pos.X = x; pos.Y = y;
                pos.Y = y + i;

                SetConsoleCursorPosition(h, pos);
                std::cout << shape[i];
            }
        }
    };

    struct cube {
        object mesh;

        void draw() {
            mesh.shape = {
                "#"
            };
            mesh.draw();
        }
    };

    struct particles {
        object mesh;
        float x = mesh.x;
        float y = mesh.y;
        void draw() {
            mesh.shape = {
                "."
            };
            mesh.draw();
        }
    };

}