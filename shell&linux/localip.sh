ip=$(ifconfig | grep -E 'inet ' | grep -v '127.0.0.1' | awk '{print $2}')
mask=$(ifconfig | grep -E 'inet ' | grep -v '127.0.0.1' | awk '{print $4}')
broadcast=$(ifconfig | grep -E 'inet ' | grep -v '127.0.0.1' | awk '{print $6}')

#echo "$mask,$ip"
ip_array=($(echo $ip | tr '.' ' '))
mask_array=($(echo $mask | tr '.' ' '))

#tr 将前者转化为后者
#echo "${ip_array[2]}"    #200

# 计算网络地址
network=""
for i in {0..3}; do
    network="$network$(( ${ip_array[$i]} & ${mask_array[$i]} ))"
    if [[ $i -ne 3 ]]; then
        network="$network."
    fi
done
#echo "网络地址是: $network"

for i in {1..3}; do
    cur_ip="${ip_array[0]}.${ip_array[1]}.${ip_array[2]}.$i" 
    #echo $cur_ip
    ping -c 1 -n 0.5 $cur_ip  >/dev/null 2>&1  #正确或者错误重新定向到 黑洞中
    if [ $? -eq 0 ]; then    #上一条指令的结果
        echo "$cur_ip 是在线的"
    else
        echo "$cur_ip 是宕机的"
    fi
done
