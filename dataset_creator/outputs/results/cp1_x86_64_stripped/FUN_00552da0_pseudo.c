
ulong FUN_00552da0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  undefined4 local_6c;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x3c) != 0) {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    local_6c = (undefined4)param_4;
    local_50 = *(ulong *)(param_1 + 0x18) & 0xffffffffffffff7f;
    local_50 = CONCAT35(local_50._5_3_,
                        CONCAT14((char)(*(ulong *)(param_1 + 0x18) >> 0x20),(undefined4)local_50)) &
               0xffffff7fffffffff;
    uVar3 = FUN_00538a80(uVar1,0,0,0,&local_58,1);
    if ((int)uVar3 == 0) goto LAB_00552dc9;
    iVar2 = FUN_00535bf0(uVar1,param_3,&local_6c,param_2,local_6c);
    if (iVar2 != 0) {
      pbVar4 = (byte *)&local_68;
      iVar2 = FUN_00552600(param_1,pbVar4,param_3,param_4);
      if (iVar2 != 0) {
        pbVar5 = (byte *)(param_1 + 0x10);
        do {
          *pbVar4 = *pbVar4 ^ *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar4 != (byte *)&local_58);
        if (local_68 == 0 && local_60 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          uVar3 = param_4 & 0xffffffff;
          goto LAB_00552dc9;
        }
        FUN_004227b0(param_3,param_4);
      }
    }
  }
  uVar3 = 0;
LAB_00552dc9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

