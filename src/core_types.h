#ifndef CORE_TYPES_H_INCLUDED
#define CORE_TYPES_H_INCLUDED

#define True 1
#define False 0

typedef struct
{
    int length;
} TSnake;

typedef struct
{
    int isRunning;
} TState;

typedef struct
{
    float x, y;
} TPoint;



#endif // CORE_TYPES_H_INCLUDED
