FROM php:8.3.10-cli

RUN mkdir -p /usr/src/pecl-ev
WORKDIR /usr/src/pecl-ev

COPY . .
RUN docker-php-ext-install sockets posix pcntl \
    && docker-php-ext-enable --ini-name 0-sockets.ini sockets \
    && docker-php-ext-enable posix pcntl

RUN ./rebuild.sh
RUN chmod +x run-tests.sh

ENV NO_INTERACTION=1
CMD ["./run-tests.sh"]

# vim: ft=dockerfile
