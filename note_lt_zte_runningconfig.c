     ┌
thult28@HA:~$ telnet localhost 20002
Trying 127.0.0.1...
Connected to localhost.
Escape character is '^]'.
 Server TCP port 20002 device /dev/ttyUSB4

OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#show tr
OLT-ZTE-LAB#show traffic-
OLT-ZTE-LAB#show traffic-
OLT-ZTE-LAB#show traffic-f
%Error 20206: Unrecognized command
OLT-ZTE-LAB#
OLT-ZTE-LAB#
OLT-ZTE-LAB#conf t
%Info 20272: Enter configuration commands, one per line. End with CTRL/Z.
OLT-ZTE-LAB(config)#?
Configure commands:
  aaa                           Configure AAA parameters
  acl                           Configure ACL
  acl6                          Configure IPv6 Acl
  add-bonding                   Add an interface to a bonding
  add-card                      Add a card
  add-rack                      Add rack
  add-shelf                     Add shelf
  add-subcard                   Add a sub card
  adsl                          Configure adsl
  adsl-alarm-profile            Adsl alarm-profile set comman
  adsl-profile                  Adsl profile set commands
  alarm                         Set the alarm parameters
  arp                           Global ARP configuration commands
  arp-agent                     Configure arp agent for Ipoa.
  atm                           Configure atm
  auto-backup                   Auto-backup
  auto-update                   Auto-update
  auto-write                    auto write when configuration change
  banner                        Terminal line banner
  bfd                           Configure BFD functions
  bonding                       configure bonding
  bridge-dhcp-relay             Configure bridge dhcp vlan map
  cable                         Cable modem global configuration.
  ces                           Enter CES mode

OLT-ZTE-LAB(config)#show
OLT-ZTE-LAB(config)#show
OLT-ZTE-LAB(config)#show
OLT-ZTE-LAB(config)#show ?
  1588-vlan                     Show all created 1588 vlan id status
  aaa                           Show AAA rule configuration
  access-list                   Information for access-list
  accounting                    Show accounting information
  acl                           ACL configuration
  adsl                          Show adsl information
  alarm                         Show alarm information
  aps                           Show APS protect configuration
  arp                           ARP table
  arp-agent                     Show ARP Agent configurations.
  atm                           Show atm information
  authen-restriction            Show authen restriction info
  auto-backup                   Show auto-backup progress
  auto-update                   Show auto-update progress
  auto-write                    show auto write configuration
  bfd                           BFD information
  bgp                           BGP information
  bonding                       Show bonding information
  bonding-capability            Show bonding capability information
  bonding-config                Show bonding config information
  bonding-status                Show bonding status information
  bridge-dhcp-relay             Show bridge vlan map information
  cable                         Show cable modem information.

OLT-ZTE-LAB(config)#show on
OLT-ZTE-LAB(config)#show onu
OLT-ZTE-LAB(config)#show onu-
OLT-ZTE-LAB(config)#show onu-type
OLT-ZTE-LAB(config)#show onu-type
OLT-ZTE-LAB(config)#show onu-type?
  onu-type     Show ONU type template information
  onu-type-if  Show ONU type UNI information
OLT-ZTE-LAB(config)#show onu-type
ONU type name:          ZTE-9806
PON type:               epon
Description:            0
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-D400
PON type:               epon
Description:            4FE
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-D402
PON type:               epon
Description:            8FE
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-D420
PON type:               epon
Description:            4FE, 2POTS
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-D421
PON type:               epon
Description:            4FE, 1WiFi
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-D422
PON type:               epon
Description:            4FE, 2POTS, 1WiFi
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-F401
PON type:               epon
Description:            1GE or 1FE
Protect type:           none
Speed:                  1g

ONU type name:          ZTE-F420
PON type:               epon
Description:            4FE, 2POTS
Protect type:           none
Speed:                  1g

OLT-ZTE-LAB(config)#show gp
OLT-ZTE-LAB(config)#show gpon
OLT-ZTE-LAB(config)#show gpon ?
  fec         Forward error correction
  global      Show GPON global informations
  mop         Show multicast operation profile mode
  olt         Show the information of OLT
  onu         Show GPON ONU information
  profile     Show profile configuration
  remote-onu  Show GPON remote ONU information
  slot        Show the information of slot
OLT-ZTE-LAB(config)#show gpon ol
OLT-ZTE-LAB(config)#show gpon olt 1
                                  ^
%Error 20200: Invalid input detected at '^' marker.Invalid command
OLT-ZTE-LAB(config)#show gpon olt
OLT-ZTE-LAB(config)#show gpon olt ?
  config      Show configuration of OLT
  cpl         Show power levelling of OLT
  range-mode  Show OLT range mode
OLT-ZTE-LAB(config)#show gpon olt 1
                                  ^
%Error 20200: Invalid input detected at '^' marker.Invalid command
OLT-ZTE-LAB(config)#show gpon olt
%Error 20203: Incomplete command.
OLT-ZTE-LAB(config)#show gpon olt ?
  config      Show configuration of OLT
  cpl         Show power levelling of OLT
  range-mode  Show OLT range mode
OLT-ZTE-LAB(config)#show gpon olt co
OLT-ZTE-LAB(config)#show gpon olt config
%Error 20203: Incomplete command.
OLT-ZTE-LAB(config)#show run
OLT-ZTE-LAB(config)#show running-config
Building configuration...
olleh
timestamp_write: 10:44:09 09/14/2018
config-version 2.0
!
system-forwarding-mode normal-mode
!
!
!
set-pnp enable
add-rack rackno 1 racktype C320Rack
add-shelf rackno 1 shelfno 1 shelftype C320_SHELF
add-card rackno 1 shelfno 1 slotno 1 GTGO
add-subcard rackno 1 shelfno 1 slotno 3 subcardno 1 UCDC/3
add-subcard rackno 1 shelfno 1 slotno 4 subcardno 1 UCDC/3
!
ip tcp finwait-time 600
ip tcp queuemax 5
ip tcp synwait-time 30
ip tcp window-size 2144
!
urpf log off
!
iptv cdr report-interval 240
iptv cdr max-records 65535
gpon
  onu profile ip ip-DASAN gateway 10.0.0.254
  onu profile ip LAB gateway 10.0.0.25
  onu profile vlan wan35 tag-mode tag cvlan 35
  onu profile vlan 335_VOIP tag-mode tag cvlan 335 pri 5
  onu profile vlan wann35 tag-mode tag cvlan 35
!
!
!
!
!
!
mac aging-time 300
mac monitor-period 10
mac usage-threshold 70
!
eth-switch max-frame-length  1600
!
auto-update backup disable
auto-update activate disable
!
!
!
gpon
  profile tcont HSI type 4 maximum 100000
  profile tcont IPTV type 2 assured 6000
  profile tcont VOIP type 1 fixed 1000
  profile tcont Multiscreen type 2 assured 6000
!
!
epon
!
!
pon
  onu-type DASAN-TEST gpon description 4ETH,WIFI,RF
  onu-type DASAN-TEST gpon max-tcont 16
  onu-type DASAN-TEST gpon max-gemport 64
  onu-type DASAN-TEST gpon max-iphost 4
  onu-type-if DASAN-TEST eth_0/1
  onu-type-if DASAN-TEST eth_0/2
  onu-type-if DASAN-TEST eth_0/3
  onu-type-if DASAN-TEST eth_0/4
  onu-type-if DASAN-TEST rf_0/1
  onu-type-if DASAN-TEST wifi_0/1
  uncfg-onu-display-info model version mac sn pw hexpw loid loidpw rid
onu-profile gpon H2I1V1
  tcont 1 name HSI profile HSI
  tcont 2 name IPTV profile IPTV
  tcont 3 name VOIP profile VOIP
  gemport 1 name HSI tcont 1
  gemport 2 name IPTV tcont 2
  gemport 3 name VOIP tcont 3
remote
  service HSI gemport 1 vlan 35
  service IPTV gemport 2 vlan 36
  service VOIP gemport 3 vlan 335
  vlan port eth_0/3 mode tag vlan 36 pri 3
  vlan port eth_0/4 mode tag vlan 335 pri 5
  dhcp-ip ethuni eth_0/3 from-internet
  mvlan 36
  mvlan tag eth_0/3 strip
  wan 1 service internet host 1
!
pon
onu-profile gpon DASAN-X
  tcont 1 name HSI profile HSI
  tcont 2 name IPTV profile IPTV
  gemport 1 name HSI tcont 1
  gemport 2 name IPTV tcont 2
remote
  service HSI gemport 1 vlan 35
  service IPTV gemport 2 vlan 36
  vlan port eth_0/2 mode tag vlan 36 pri 3
  mvlan 36
  mvlan tag eth_0/2 strip
  wan 1 service internet host 1
!
pon
onu-profile gpon DASAN-Y
  tcont 3 name HSI profile HSI
  tcont 4 name IPTV profile IPTV
  gemport 3 name HSI tcont 3
  gemport 4 name IPTV tcont 4
remote
  service HSI gemport 3 vlan 35
  service IPTV gemport 4 vlan 36
  vlan port eth_0/2 mode tag vlan 36 pri 3
  mvlan 36
  mvlan tag eth_0/2 strip
  wan 1 service internet host 1
!
pon
!
!
!
vlan database
  vlan 1,9,35-37,40,335
  vlan 2501-2502,3888
!
vlan 3888
  multicast-packet drop-unknown
!
!
!
his-performance sample enable
his-performance alarm enable
his-performance auto-upload disable
!
!
clock
!
!

!
clock
!
!

!
ptp
!
!
port-identification access-node-id-type inband-mac
port-identification rackno 1 frameno 1
!
pppoe-intermediate-agent enable
!
igmp  enable
igmp  mvlan 3888
igmp  mvlan 3888 version-mode v1 accept
igmp  mvlan 3888 version-mode v2 accept
igmp  mvlan 3888 version-mode v3 accept
igmp  mvlan 3888 group-filter disable
igmp  mvlan 3888 priority 3
mld  disable
  mib-compatibility iftable v1
!
ip-source-guard ip-spoofing-trap interval 3
ip-source-guard disable
security port-protect enable
!
!
!
virtual-mac flexible-syntax-profile MT
add Ctrl-Byte 0 width 6 index 6
exit
virtual-mac access-node-id 0
!
interface mng1
  ip vrf forwarding vpn_mng
  ip address 192.168.1.20 255.255.255.0
  config-filename startrun.dat
  negotiation auto
  tag-mode untag
!
interface vlan 35
  ip address 10.0.0.25 255.255.255.0
!
interface vlan 36
  ip address 36.0.0.254 255.255.255.0
!
interface vlan 3888
  ip address 38.0.0.254 255.255.255.0
!
interface null1
!
interface smartgroup1
  smartgroup load-balance src-dst-mac
  smartgroup mode on
  switchport mode trunk
  switchport vlan 1,35-37,40,335 tag
  switchport vlan 2501-2502,3888 tag
!
interface gpon-olt_1/1/1
  no shutdown
  linktrap disable
  onu 2 type DASAN-TEST sn DSNW26818038
  onu 4 type DASAN-TEST sn DSNW1F36B3D0
  onu 5 type DASAN-TEST sn DSNW26817F60
  onu 6 type DASAN-TEST sn DSNW26AF9868
  onu 7 type DASAN-TEST sn DSNW26ADB1D8
  onu 8 type DASAN-TEST sn DSNW26AF3070
  onu 9 type DASAN-TEST sn RTKG15038603
  onu 2 profile  DASAN-Y
  onu 4 profile  DASAN-X
  onu 5 profile  DASAN-X
  onu 6 profile  DASAN-X
  onu 7 profile  DASAN-X
  onu 8 profile  DASAN-X
  onu 9 profile  DASAN-X
!
interface gpon-onu_1/1/1:2
  switchport mode hybrid vport 3
  switchport mode hybrid vport 4
  service-port 3 vport 3 user-vlan 35 vlan 35
  service-port 4 vport 4 user-vlan 36 vlan 36
!
interface gpon-onu_1/1/1:4
  switchport mode hybrid vport 1
  switchport mode hybrid vport 2
!
interface gpon-onu_1/1/1:5
  switchport mode hybrid vport 1
  switchport mode hybrid vport 2
  service-port 1 vport 1 user-vlan 35 vlan 35
  service-port 2 vport 2 user-vlan 36 vlan 36
!
interface gpon-onu_1/1/1:6
  switchport mode hybrid vport 1
  switchport mode hybrid vport 2
  service-port 1 vport 1 user-vlan 35 vlan 35
  service-port 2 vport 2 user-vlan 36 vlan 36
!
interface gpon-onu_1/1/1:7
  switchport mode hybrid vport 1
  switchport mode hybrid vport 2
  service-port 1 vport 1 user-vlan 35 vlan 35
  service-port 2 vport 2 user-vlan 36 vlan 36
  pppoe-intermediate-agent enable vport 1
!
interface gpon-onu_1/1/1:8
  switchport mode hybrid vport 1
  switchport mode hybrid vport 2
  service-port 1 vport 1 user-vlan 35 vlan 35
  service-port 2 vport 2 user-vlan 36 vlan 36
  pppoe-intermediate-agent enable vport 1
!
interface gpon-onu_1/1/1:9
  switchport mode hybrid vport 1
  switchport mode hybrid vport 2
  service-port 1 vport 1 user-vlan 35 vlan 35
  service-port 2 vport 2 user-vlan 36 vlan 36
!
interface gpon-olt_1/1/2
  shutdown
  linktrap disable
!
interface gpon-olt_1/1/3
  shutdown
  linktrap disable
!
interface gpon-olt_1/1/4
  shutdown
  linktrap disable
!
interface gpon-olt_1/1/5
  shutdown
  linktrap disable
!
interface gpon-olt_1/1/6
  shutdown
  linktrap disable
!
interface gpon-olt_1/1/7
  shutdown
  linktrap disable
!
interface gpon-olt_1/1/8
  shutdown
  linktrap disable
!
interface gei_1/3/1
  no shutdown
  hybrid-attribute fiber
  negotiation auto
  flowcontrol disable
  linktrap enable
  als disable
  switchport mode hybrid
  switchport vlan 35-36,40,335,3888 tag
  port-protect disable
  uplink-isolate disable
!
interface xgei_1/3/2
  phy-attribute lan
  no shutdown
  hybrid-attribute fiber
  no negotiation auto
  speed 1000
  duplex full
  flowcontrol disable
  linktrap enable
  als disable
  switchport mode hybrid
  switchport vlan 35 tag
  port-protect disable
  uplink-isolate disable
!
interface gei_1/3/3
  no shutdown
  hybrid-attribute copper
  negotiation auto
  flowcontrol disable
  linktrap enable
  als disable
  switchport mode hybrid
  switchport vlan 35,335,2502 tag
  switchport vlan 36 untag
  port-protect disable
  uplink-isolate disable
!
interface gei_1/4/1
  shutdown
  hybrid-attribute fiber
  negotiation auto
  flowcontrol disable
  linktrap enable
  als disable
  switchport mode trunk
  switchport vlan 1 tag
  port-protect disable
  uplink-isolate disable
!
interface xgei_1/4/2
  phy-attribute lan
  shutdown
  hybrid-attribute fiber
  no negotiation auto
  speed 10000
  duplex full
  flowcontrol disable
  linktrap enable
  als disable
  switchport mode trunk
  switchport vlan 1 tag
  port-protect disable
  uplink-isolate disable
!
interface gei_1/4/3
  shutdown
  hybrid-attribute copper
  negotiation auto
  flowcontrol disable
  linktrap enable
  als disable
  switchport mode trunk
  switchport vlan 1 tag
  port-protect disable
  uplink-isolate disable
!
!
set ethernet-oam enable
!
mpls ldp dynamic-capability
!
flow-label para-id 23
!
!
!
!
!
!
!
lldp disable
!
ipoa inatmarp-interval 10
ipoa gateway-arp-interval 10
!
mpnat trans-table aging-time 60
mpnat onu-telnet idle-time 3
mpnat onu-ftp aging-time 5
mpnat onu-snmp aging-time 30
mpnat onu-ftp-data aging-time 5
mpnat onu-mng-port auto-alloc disable
!
pon
!
!
pon-onu-mng gpon-onu_1/1/1:2
  wan-ip 1 mode static ip-profile ip-DASAN ip 10.0.0.2 mask 255.255.255.0 vlan-profile wan35 host 1
!
pon-onu-mng gpon-onu_1/1/1:4
  wan-ip 1 mode static ip-profile ip-DASAN ip 10.0.0.4 mask 255.255.255.0 vlan-profile wan35 host 1
!
pon-onu-mng gpon-onu_1/1/1:5
  wan-ip 1 mode static ip-profile ip-DASAN ip 10.0.0.5 mask 255.255.255.0 vlan-profile wan35 host 1
!
pon-onu-mng gpon-onu_1/1/1:6
  wan-ip 1 mode static ip-profile LAB ip 10.0.0.6 mask 255.255.255.0 vlan-profile wann35 host 1
!
pon-onu-mng gpon-onu_1/1/1:7
  wan-ip 1 mode static ip-profile LAB ip 10.0.0.6 mask 255.255.255.0 vlan-profile wann35 host 1
!
pon-onu-mng gpon-onu_1/1/1:8
  wan-ip 1 mode static ip-profile LAB ip 10.0.0.8 mask 255.255.255.0 vlan-profile wann35 host 1
!
pon-onu-mng gpon-onu_1/1/1:9
!
!
pon
!
!
  mvlan-translate 3888 to 36
!
!
ip-service arp-direct-to-gateway disable
igmp  mvlan 3888 source-port gei_1/3/1
igmp  mvlan 3888 receive-port gpon-onu_1/1/1:2 vport 4
!
!
auto-write disable
!
inband-management enable
!
version V4.8.35
!
hostname OLT-ZTE-LAB
!
enable secret level 15 5 RcMLuUKvnFZX9kNAV6A/UA==
!
service password-encryption
!
!
username zte password  7 RcMLuUKvnFZX9kNAV6A/UA== privilege 15
username zte password  7 RcMLuUKvnFZX9kNAV6A/UA== max-sessions 16
username login-range name zte login-begin 00:00:00  login-end 23:59:59
username expire-date name zte datetime 12-31-2099 23:59:59
username password-changed name zte is-changed false

!
!
!
user-authentication-type local
user-authorization-type local
!
help message full
!
banner incoming @
    *************************************************************************
                     Welcome to ZXAN product of ZTE Corporation
    *************************************************************************
@
!
message-of-day @
@
!
!
service timestamps log datetime localtime
service timestamps debug datetime localtime
!
!
!
!
snmp-server location No.889 BiBo Rd.PuDong District, Shanghai, China
snmp-server contact +86-21-68895000
snmp-server packetsize 8192
snmp-server engine-id mode mac
snmp-server group GroupPriv0 v3 priv read AllView
snmp-server group GroupPriv5 v3 priv read AllView write ViewPriv5
snmp-server group GroupPriv10 v3 priv read AllView write ViewPriv10
snmp-server group GroupPriv15 v3 priv read AllView write AllView
snmp-server view AllView 1.2 included
snmp-server view AllView 1.3 included
snmp-server view ViewPriv5 1.2 included
snmp-server view ViewPriv5 1.3 included
snmp-server view ViewPriv5 1.3.6.1.4.1.3902.1082.10.1 excluded
snmp-server view ViewPriv5 1.3.6.1.4.1.3902.1082.10.10 excluded
snmp-server view ViewPriv5 1.3.6.1.4.1.3902.1082.20.1 excluded
snmp-server view ViewPriv5 1.3.6.1.4.1.3902.1082.20.10 excluded
snmp-server view ViewPriv10 1.2 included
snmp-server view ViewPriv10 1.3 included
snmp-server view ViewPriv10 1.3.6.1.4.1.3902.1082.20.10 excluded
!
!
no ftp-server enable listen 21
ftp-server top-directory  /flash/
!
logging alarmlog enable
logging level notification
logging snmplog disable
logging igmplog enable
logging cmdlog enable
syslog facility local0
syslog severity 6
line console idle-timeout 15
line console absolute-timeout 1440
line telnet idle-timeout 15
line telnet absolute-timeout 1440
line telnet users 16

no hotkey ctrl_g
no hotkey ctrl_l
no hotkey ctrl_o
no hotkey ctrl_r
no hotkey ctrl_s
no hotkey ctrl_t
!
ssh server authentication mode local
ssh server authentication type pap
no ssh server only
ssh server version 2
!
!
radius attribute vendor-specific vendor-id 3902
!
!
!
radius server-port-check on
!
!
tacacs disable
tacacs-server timeout 5
tacacs-server packet 1024
!
!
alarm enable
alarm confirm
alarm trap-confirm retry 3 timeout 20
nms-hello-trap disable
alarm report-speed 0
alarm anti-jitter 0
alarm filter source-code    11 dest-code    12
ipv6 dhcp snooping disable
!
ipv6 dhcp snooping ifdown-del-entry disable
!
ipv6 nd snooping disable
!
!
control-panel
  packet-limit arp 300
  packet-limit icmp 250
  packet-limit igmp 300
  packet-limit dhcp 160
  packet-limit snmp 200
  packet-limit telnet 300
  packet-limit bfd 300
  packet-limit stp 500
  packet-limit lacp 600
  packet-limit lldp 500
  packet-limit rip 500
  packet-limit bgp 500
  packet-limit ospf 400
  packet-limit isis 400
  packet-limit ldp 600
  packet-limit cfm 32
  packet-limit ipv6_rs 700
  packet-limit ipv6_ra 700
  packet-limit ipv6_ns 200
  packet-limit ipv6_na 600
  packet-limit ipv6_icmp 200
  packet-limit ipv6_dhcp 160
  packet-limit r-aps 1000
!
!
end
OLT-ZTE-LAB(config)#
OLT-ZTE-LAB(config)#
OLT-ZTE-LAB(config)#
OLT-ZTE-LAB(config)#
OLT-ZTE-LAB(config)#
OLT-ZTE-LAB(config)#
