FROM gcc:latest
LABEL Name=receipt_reader_env Version=0.0.1
RUN apt-get -y update && apt-get install -y cmake vim

################################################################################
################################ ssh setup #####################################
################################################################################
RUN mkdir -p /root/.ssh/
COPY .ssh/id_rsa /root/.ssh/id_rsa
RUN chmod 400 /root/.ssh/id_rsa
COPY .ssh/known_hosts /root/.ssh/known_hosts

WORKDIR /