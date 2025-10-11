
void BF_ofb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  long in_FS_OFFSET;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar2 = *(uint *)ivec;
  uVar5 = *num;
  uVar4 = (uVar2 & 0xff0000) >> 8;
  local_50 = uVar2 >> 0x18 | uVar4 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(ivec + 4);
  local_48 = uVar2 & 0xffff | uVar4 << 8 | (uVar2 >> 0x18) << 0x18;
  uVar2 = (uVar3 & 0xff0000) >> 8;
  local_4c = uVar3 >> 0x18 | uVar2 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  local_44 = uVar3 & 0xffff | uVar2 << 8 | (uVar3 >> 0x18) << 0x18;
  if (length != 0) {
    iVar7 = 0;
    pbVar6 = in;
    do {
      if (uVar5 == 0) {
        iVar7 = iVar7 + 1;
        BF_encrypt(&local_50,schedule);
        local_48 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                   local_50 << 0x18;
        local_44 = local_4c >> 0x18 | (local_4c & 0xff0000) >> 8 | (local_4c & 0xff00) << 8 |
                   local_4c << 0x18;
      }
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      *out = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar5);
      uVar5 = uVar5 + 1 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar6) != (uchar *)0x0);
    if (iVar7 != 0) {
      *(uint *)ivec =
           local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
           local_50 << 0x18;
      *(uint *)(ivec + 4) =
           local_4c >> 0x18 | (local_4c & 0xff0000) >> 8 | (local_4c & 0xff00) << 8 |
           local_4c << 0x18;
    }
  }
  *num = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

