FROM ubuntu:16.04

WORKDIR /app/redis

RUN apt update && \
    apt install -y apt-utils debhelper devscripts build-essential \
    libssl-dev

RUN apt install -y dpkg-dev libsystemd-dev \
	tcl tcl-tls pkg-config
