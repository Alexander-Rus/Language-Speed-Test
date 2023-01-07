FROM ubuntu:latest

RUN apt update
RUN apt install build-essential -y

WORKDIR /usr/src

COPY main.cpp ./

RUN g++ main.cpp

CMD ./a.out