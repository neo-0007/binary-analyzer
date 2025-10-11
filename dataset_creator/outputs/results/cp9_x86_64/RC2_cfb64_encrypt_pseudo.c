
void RC2_cfb64_encrypt(uchar *in,uchar *out,long length,RC2_KEY *schedule,uchar *ivec,int *num,
                      int enc)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar4 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar5 = in;
    if (length != 0) {
      do {
        if (uVar4 == 0) {
          local_58 = (ulong)*(uint *)ivec;
          local_50 = (ulong)*(uint *)(ivec + 4);
          RC2_encrypt(&local_58,schedule);
          *(undefined4 *)ivec = (undefined4)local_58;
          *(undefined4 *)(ivec + 4) = (undefined4)local_50;
        }
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = ivec[(int)uVar4];
        ivec[(int)uVar4] = bVar3;
        uVar4 = uVar4 + 1 & 7;
        *out = bVar3 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar5) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar5 = in;
    do {
      if (uVar4 == 0) {
        local_58 = (ulong)*(uint *)ivec;
        local_50 = (ulong)*(uint *)(ivec + 4);
        RC2_encrypt(&local_58,schedule);
        *(undefined4 *)ivec = (undefined4)local_58;
        *(undefined4 *)(ivec + 4) = (undefined4)local_50;
      }
      lVar2 = (long)(int)uVar4;
      bVar3 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar3 = bVar3 ^ ivec[lVar2];
      uVar4 = uVar4 + 1 & 7;
      *out = bVar3;
      ivec[lVar2] = bVar3;
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

