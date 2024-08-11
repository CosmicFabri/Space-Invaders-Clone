#include "block.hpp"

Block::Block(Vector2 position)
{
    this -> position = position;
}

void Block::Draw()
{
    // Each block will be 3 x 3 pixels
    DrawRectangle(position.x, position.y, 3, 3, {243, 216, 63, 255});
}

Rectangle Block::getRect()
{
    return {position.x, position.y, 3, 3};
}
