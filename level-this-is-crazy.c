#include "robot.h"

void lane1()
{

forward();
forward();
left();
forward();
take();
right();
right();
forward();
left();
forward();
forward();
left();
forward();
take();
right();
right();
forward();
left();
forward();
forward();
left();
forward();
take();
right();
right();
forward();
left();
forward();
forward();
left();
forward();
take();
right();
right();
forward();
left();
forward();
forward();
left();
forward();
take();
right();
right();
forward();
left();
if(look() == Web)
{
drop();
}
take();
right();
right();
drop();
left();
left();
forward();
forward();
left();

}


void lane2()
{
while(look() == Void)
{
forward();
if(look() == Rock)
{
take();
}
}
if(look() != Void)
{
left();

}

}


void lane3()
{

if(look() == Web)
{
drop();
take();
}

if(look() == Rock)
{
left();
left();
drop();
left();
left();
take();
}



while(look() == Void)
{

forward();

if(look() == Rock )
{
left();
left();
drop();
left();
left();
take();
}


if(look() == Web)
{
drop();
take();
}

if(look() != Void)
{
right();
}

}



}


void lane4()
{
if(look() == Rock)
{
right();
drop();
left();
take();
}

if(look() == Web )
{
drop();
take();
}


while(look() == Void )
{
forward();
if(look() == Web )
{
drop();
take();
}

if(look() == Rock)
{
left();
left();
drop();
left();
left();
take();
}



}



}


void lane5()
{
left();
forward();
forward();
left();
}


void lane6()
{
if(look() == Web)
{
drop();
take();
}

if(look() == Rock)
{
left();
left();
drop();
left();
left();
take();
}

while(look()== Void)
{
forward();

if(look() == Web)
{
drop();
take();
}

if(look() == Rock)
{
left();
left();
drop();
left();
left();
take();
}


if(look() == Exit)
{
left();
left();
drop();
left();
left();
escape();
}



}




}



void ant()
{

lane1();
lane2();
lane3();
lane4();
lane5();
lane6();
}
