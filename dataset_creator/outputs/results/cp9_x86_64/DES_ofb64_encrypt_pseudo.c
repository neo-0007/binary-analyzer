
void DES_ofb64_encrypt(uchar *in,uchar *out,long length,DES_key_schedule *schedule,DES_cblock *ivec,
                      int *num)

{
  byte bVar1;
  DES_cblock auVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  long in_FS_OFFSET;
  uint local_50;
  undefined4 uStack_4c;
  DES_cblock local_48;
  long local_40;
  
  uStack_4c = *(undefined4 *)(*ivec + 4);
  local_50 = *(uint *)*ivec;
  uVar3 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *ivec;
  if (length != 0) {
    iVar5 = 0;
    pbVar4 = in;
    do {
      if (uVar3 == 0) {
        iVar5 = iVar5 + 1;
        DES_encrypt1(&local_50,schedule,1);
        local_48[0] = (undefined1)local_50;
        local_48[1] = local_50._1_1_;
        local_48[2] = local_50._2_1_;
        local_48[3] = local_50._3_1_;
        local_48[4] = (undefined1)uStack_4c;
        local_48[5] = uStack_4c._1_1_;
        local_48[6] = uStack_4c._2_1_;
        local_48[7] = uStack_4c._3_1_;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *out = bVar1 ^ local_48[(int)uVar3];
      uVar3 = uVar3 + 1 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar4) != (uchar *)0x0);
    if (iVar5 != 0) {
      auVar2[4] = (undefined1)uStack_4c;
      auVar2[5] = uStack_4c._1_1_;
      auVar2[6] = uStack_4c._2_1_;
      auVar2[7] = uStack_4c._3_1_;
      auVar2[0] = (undefined1)local_50;
      auVar2[1] = local_50._1_1_;
      auVar2[2] = local_50._2_1_;
      auVar2[3] = local_50._3_1_;
      *ivec = auVar2;
    }
  }
  *num = uVar3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

