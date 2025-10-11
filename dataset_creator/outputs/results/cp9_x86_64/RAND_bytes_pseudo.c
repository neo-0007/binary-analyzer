
int RAND_bytes(uchar *buf,int num)

{
  int iVar1;
  
  if (-1 < num) {
    iVar1 = RAND_bytes_ex(0,buf,(long)num,0);
    return iVar1;
  }
  return 0;
}

