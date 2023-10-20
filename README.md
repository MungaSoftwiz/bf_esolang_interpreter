# Brainfuck Interpreter

## Introduction

This Brainfuck interpreter project is inspired by a task I encountered during
my time at ALX, which sparked the interest in esoteric programming languages.
Brainfuck, a minimalist, Turing complete language, has always been a
fascinating challenge for programmers.

## What is Brainfuck?

Brainfuck is an esoteric programming language created by Urban Müller in 1993.
It is characterized by its minimalistic and cryptic syntax, consisting of only
eight commands: `>, <, +, -, ., ,, [, and ]`. Despite its simplicity, Brainfuck
is Turing complete, meaning it can perform any computation that any other
programming language can, given enough time and memory.

In Brainfuck, you work with a one-dimensional array of memory cells, a data
pointer that points to the current memory cell, and input and output streams
that are often connected to the keyboard and a monitor using ASCII character
encoding. The language operates through a set of commands, each represented by
a single character.

## Getting Started

### Prerequisites

To run this Brainfuck interpreter, you will need a C compiler such as GCC. If
you don't have one installed, you can download it from
[https://gcc.gnu.org/](https://gcc.gnu.org/).

### Building the Interpreter

Follow these steps to build the Brainfuck interpreter:

1. Clone this repository to your local machine:
>git clone https://github.com/MungaSoftwiz/bf_esolang_interpreter.git


2. Navigate to the project directory:
>cd bf_esolang_interpreter/interpreter
