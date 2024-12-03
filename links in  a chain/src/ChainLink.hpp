/*
 * ChainLink.hpp
 *
 *  Created on: Nov 26, 2024
 *      Author: Turbo
 */

#ifndef CHAINLINK_HPP_
#define CHAINLINK_HPP_
#include <string>
using namespace std;

class ChainLink {
    private:
      string color;

    public:
      ChainLink(string color) {
        this->color = color;
      }

      string get_color() {
        return this->color;
      }
};

#endif /* CHAINLINK_HPP_ */
