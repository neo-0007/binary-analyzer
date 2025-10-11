
void cfbr_encrypt_block(byte *param_1,byte *param_2,uint param_3,undefined8 param_4,byte *param_5,
                       int param_6,code *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  long local_30;
  
  local_58 = *(undefined8 *)param_5;
  uStack_50 = *(undefined8 *)(param_5 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  (*param_7)(param_5,param_5,param_4);
  iVar4 = (int)param_3 >> 3;
  if (param_6 == 0) {
    local_48 = *param_1;
    *param_2 = *param_1 ^ *param_5;
  }
  else {
    local_48 = *param_1 ^ *param_5;
    *param_2 = *param_1 ^ *param_5;
  }
  if ((param_3 & 7) == 0) {
    uVar2 = *(undefined8 *)((long)&uStack_50 + (long)iVar4);
    *(undefined8 *)param_5 = *(undefined8 *)((long)&local_58 + (long)iVar4);
    *(undefined8 *)(param_5 + 8) = uVar2;
  }
  else {
    bVar1 = (byte)param_3 & 7;
    lVar3 = 0;
    do {
      param_5[lVar3] =
           *(char *)((long)&local_58 + lVar3 + iVar4) << bVar1 |
           (byte)((int)(uint)*(byte *)((long)&local_58 + lVar3 + iVar4 + 1) >> (8 - bVar1 & 0x1f));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

