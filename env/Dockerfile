FROM gcc:latest
LABEL Name=receipt_reader_env Version=0.0.1
RUN apt-get -y update && apt-get install -y cmake vim

################################################################################
################################ ssh setup #####################################
################################################################################
RUN mkdir -p /root/.ssh/
COPY .ssh/id_ed25519 /root/.ssh/id_ed25519
RUN chmod 400 /root/.ssh/id_ed25519
COPY .ssh/known_hosts /root/.ssh/known_hosts

WORKDIR /