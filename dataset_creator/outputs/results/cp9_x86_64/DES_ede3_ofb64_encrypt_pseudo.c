
void DES_ede3_ofb64_encrypt
               (uchar *in,uchar *out,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int *num)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  long in_FS_OFFSET;
  uint local_50;
  undefined4 uStack_4c;
  DES_cblock local_48;
  long local_40;
  
  uVar3 = *num;
  local_50 = *(uint *)*ivec;
  uStack_4c = *(undefined4 *)(*ivec + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *ivec;
  if (length != 0) {
    iVar6 = 0;
    pbVar4 = in;
    uVar5 = local_50;
    uVar2 = uStack_4c;
    do {
      if (uVar3 == 0) {
        iVar6 = iVar6 + 1;
        DES_encrypt3(&local_50,ks1,ks2,ks3);
        local_48[0] = (undefined1)local_50;
        local_48[1] = local_50._1_1_;
        local_48[2] = local_50._2_1_;
        local_48[3] = local_50._3_1_;
        local_48[4] = (undefined1)uStack_4c;
        local_48[5] = uStack_4c._1_1_;
        local_48[6] = uStack_4c._2_1_;
        local_48[7] = uStack_4c._3_1_;
        uVar5 = local_50;
        uVar2 = uStack_4c;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *out = bVar1 ^ local_48[(int)uVar3];
      uVar3 = uVar3 + 1 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar4) != (uchar *)0x0);
    if (iVar6 != 0) {
      *(uint *)*ivec = uVar5;
      *(undefined4 *)(*ivec + 4) = uVar2;
    }
  }
  *num = uVar3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

