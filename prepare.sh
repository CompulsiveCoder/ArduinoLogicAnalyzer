#!/bin/bash

# Note: You may need to run this script with sudo

echo "Preparing for project"

DIR=$PWD

sudo apt-get update

# curl
if ! type "curl" > /dev/null; then
  sudo apt-get install -y curl
fi

# git
if ! type "git" > /dev/null; then
  sudo apt-get install -y git
fi

# python
if ! type "python" > /dev/null; then
  sudo apt-get install -y python python-pip
fi

# platform.io
if ! type "pio" > /dev/null; then
  sudo python -c "$(curl -fsSL https://raw.githubusercontent.com/platformio/platformio/develop/scripts/get-platformio.py)"
fi

