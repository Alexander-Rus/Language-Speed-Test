FROM ubuntu:latest

RUN apt update
RUN apt install default-jdk -y

WORKDIR /usr/src

COPY main.java ./

RUN javac main.java

CMD ["java", "main"]