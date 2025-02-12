ip_host=$(hostname -I | awk '{print $1}')
echo "本机 IP 地址: $ip_host"

ip_ifconfig=$(ifconfig|grep -w 'inet'|awk '{print $2}')
#打印第二列  -w完全匹配
echo "本机 IP 地址: $ip_ifconfig"


ip_ip=$(ip -4 address|grep 'inet'|awk '{print $2}')

echo "本机 IP 地址: $ip_ip"