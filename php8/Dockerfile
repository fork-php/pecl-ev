FROM php:8.1.0beta1-cli

RUN mkdir -p /usr/src/pecl-ev
WORKDIR /usr/src/pecl-ev

COPY . .

RUN docker-php-ext-install sockets && docker-php-ext-enable --ini-name 0-sockets.ini sockets
RUN ./rebuild.sh

ENV NO_INTERACTION=1
CMD ./run-tests.sh

# vim: ft=dockerfile
