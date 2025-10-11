
int BIO_set_tcp_ndelay(int sock,int turn_on)

{
  int iVar1;
  int local_c [3];
  
  local_c[0] = turn_on;
  iVar1 = setsockopt(sock,6,1,local_c,4);
  return (int)(iVar1 == 0);
}

