# base image
FROM centos

# running required command
RUN yum install -y gcc gcc-c++ glibc make autoconf 

RUN gcc eatmem.c

