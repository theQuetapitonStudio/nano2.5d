#include "nano2.5d.hpp"
#include "cwing.hpp" // Good, but not mandatory.
int main() {
    mindow win; // only if you're going to use cwing

    win.set_title("title here");

    // create object system
    nano::cube mycube;
    nano::particles myparticle;

    // add objects

    mycube.draw();
    
    return 0;
}