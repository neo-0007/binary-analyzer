
undefined8 FUN_005b4c90(uint *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    do {
      if (param_3 == 0x1001) {
        local_48 = (ulong)(byte)*param_1;
        param_2 = param_2 + -1;
        param_1 = (uint *)((long)param_1 + 1);
      }
      else if (param_3 == 0x1002) {
        uVar1 = *param_1;
        param_2 = param_2 + -2;
        param_1 = (uint *)((long)param_1 + 2);
        local_48 = (ulong)(ushort)((ushort)uVar1 << 8 | (ushort)uVar1 >> 8);
      }
      else if (param_3 == 0x1004) {
        uVar1 = *param_1;
        param_2 = param_2 + -4;
        param_1 = param_1 + 1;
        local_48 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18);
      }
      else {
        iVar2 = FUN_005b8770(param_1,param_2,&local_48);
        if (iVar2 < 0) {
          uVar3 = 0xffffffff;
          goto LAB_005b4d65;
        }
        param_2 = param_2 - iVar2;
        param_1 = (uint *)((long)param_1 + (long)iVar2);
      }
      if ((param_4 != (code *)0x0) && (uVar3 = (*param_4)(local_48,param_5), (int)uVar3 < 1))
      goto LAB_005b4d65;
    } while (param_2 != 0);
  }
  uVar3 = 1;
LAB_005b4d65:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

