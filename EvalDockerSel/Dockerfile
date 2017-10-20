FROM tutum/apache-php

WORKDIR /app

RUN rm -r *

COPY /upload/. /app

RUN chmod 0755 system/storage/cache/
RUN chmod 0755 system/storage/download/
RUN chmod 0755 system/storage/logs/
RUN chmod 0755 system/storage/modification/
RUN chmod 0755 system/storage/session/
RUN chmod 0755 system/storage/upload/
RUN chmod 0755 system/storage/vendor/
RUN chmod 0755 image/
RUN chmod 0755 image/cache/
RUN chmod 0755 image/catalog/
RUN chmod 0755 config.php
RUN chmod 0755 admin/config.php