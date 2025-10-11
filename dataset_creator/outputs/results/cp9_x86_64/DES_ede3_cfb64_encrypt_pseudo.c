
void DES_ede3_cfb64_encrypt
               (uchar *in,uchar *out,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int *num,int enc)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  DES_cblock local_48;
  long local_40;
  
  uVar4 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar5 = in;
    if (length != 0) {
      do {
        if (uVar4 == 0) {
          local_48 = *ivec;
          DES_encrypt3((uint *)local_48,ks1,ks2,ks3);
          *ivec = local_48;
        }
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = (*ivec)[(int)uVar4];
        (*ivec)[(int)uVar4] = bVar2;
        uVar4 = uVar4 + 1 & 7;
        *out = bVar2 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar5) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar5 = in;
    do {
      if (uVar4 == 0) {
        local_48 = *ivec;
        DES_encrypt3((uint *)local_48,ks1,ks2,ks3);
        *ivec = local_48;
      }
      lVar3 = (long)(int)uVar4;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = bVar2 ^ (*ivec)[lVar3];
      uVar4 = uVar4 + 1 & 7;
      *out = bVar2;
      (*ivec)[lVar3] = bVar2;
      out = out + 1;
    } while (in + (length - (long)pbVar5) != (uchar *)0x0);
  }
  *num = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

