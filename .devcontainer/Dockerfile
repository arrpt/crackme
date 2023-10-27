FROM amd64/ubuntu
RUN apt update && apt upgrade -y
RUN apt update && apt upgrade -y && apt install locales -y
RUN sed -i -e 's/# en_US.UTF-8 UTF-8/en_US.UTF-8 UTF-8/' /etc/locale.gen && \
    locale-gen
ENV LC_ALL en_US.UTF-8 
ENV LANG en_US.UTF-8  
ENV LANGUAGE en_US:en
RUN apt install -y git fish python3 python3-pip curl wget
#RUN apt install -y openssh-server
#RUN mkdir /var/run/sshd
#RUN echo "root:root" | chpasswd
#RUN sed -i 's/#PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config
#EXPOSE 22
#CMD ["/usr/sbin/sshd", "-D"]
RUN apt clean && rm -rf /var/lib/apt/lists/*
ENTRYPOINT ["/usr/bin/fish"]