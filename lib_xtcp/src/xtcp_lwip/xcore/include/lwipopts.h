// Copyright (c) 2015, XMOS Ltd, All rights reserved
#define NO_SYS 1
#define LWIP_NETCONN 0
#define LWIP_SOCKET 0
#define NO_SYS_NO_TIMERS 1

#define LWIP_DNS 1
#define DNS_MAX_NAME_LENGTH 64
#define LWIP_DHCP 1
#define LWIP_SNMP 0
#define LWIP_AUTOIP 1
#define LWIP_IGMP 1
#define LWIP_ICMP 1
#define LWIP_TCP 1
#define LWIP_UDP 1
#define LWIP_EVENT_API  1
#define LWIP_RAW 0
#define LWIP_UDP_CALLBACK_API 0
#define LWIP_CALLBACK_API 0


#define LWIP_NETIF_HOSTNAME 0
#define LWIP_NETIF_API 0
#define LWIP_NETIF_STATUS_CALLBACK 0
#define LWIP_NETIF_LINK_CALLBACK 0
#define LWIP_NETIF_HWADDRHINT 0
#define LWIP_STATS 0
#define MEM_LIBC_MALLOC 1
#define IP_REASSEMBLY 0
#define IP_FRAG 0

#define LWIP_NETIF_TX_SINGLE_PBUF 1

#define LWIP_DHCP_AUTOIP_COOP 1

#define CHECKSUM_CHECK_TCP 0
#define CHECKSUM_CHECK_IP  0
#define CHECKSUM_CHECK_UDP  0

#define MEM_ALIGNMENT 4


#define TCP_MSS                         1460
#define TCP_SND_BUF                     4096
#define TCP_QUEUE_OOSEQ                 1
#define MEMP_NUM_TCP_SEG                8*(TCP_WND + TCP_SND_BUF)/ TCP_MSS
#define TCP_SND_QUEUELEN                (4 * (TCP_SND_BUF/TCP_MSS))
#define MEMP_NUM_TCP_PCB                6
#define TCP_WND                         4096
