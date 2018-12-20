/**
 * CS V13 Object-Oriented Programming
 * CRN: [CHANGE THIS INFORMATION]
 * Assignment: [EX03-THREEINTEGERSORT]
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author [Joseph Ramos]
 */


#include "threeintegersort.h"
#include <iostream>

namespace edu{
    namespace vcccd{
        namespace vc{
            namespace csv13{
                void sort(int &x, int &y, int &z){
                    if (x > y) {
                        std::swap(x, y);
                    }
                    if (x > z) {
                        std::swap(x, z);
                    }
                    if (y > z) {
                        std::swap(y, z);
                    }
                }
            }
        }
    }
}