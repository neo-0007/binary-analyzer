
void RC2_ofb64_encrypt(uchar *in,uchar *out,long length,RC2_KEY *schedule,uchar *ivec,int *num)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  
  local_58 = (ulong)*(uint *)ivec;
  uVar2 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ulong)*(uint *)(ivec + 4);
  local_48 = *(undefined8 *)ivec;
  if (length != 0) {
    iVar4 = 0;
    pbVar3 = in;
    do {
      if (uVar2 == 0) {
        iVar4 = iVar4 + 1;
        RC2_encrypt(&local_58,schedule);
        local_48 = CONCAT44((undefined4)local_50,(int)local_58);
      }
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *out = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar2);
      uVar2 = uVar2 + 1 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar3) != (uchar *)0x0);
    if (iVar4 != 0) {
      *(undefined4 *)ivec = (undefined4)local_58;
      *(undefined4 *)(ivec + 4) = (undefined4)local_50;
    }
  }
  *num = uVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

