FROM php:5.6-cli

RUN mkdir -p /usr/src/pecl-ev
WORKDIR /usr/src/pecl-ev

COPY . .

RUN rm -rf Makefile.global aclocal.m4 *.cache *.guess  configure.* include/ install-sh missing mkinstalldirs ltmain.sh aclocal.m4 build acinclude.m4
RUN docker-php-ext-install sockets && docker-php-ext-enable --ini-name 0-sockets.ini sockets

# vim: ft=dockerfile
