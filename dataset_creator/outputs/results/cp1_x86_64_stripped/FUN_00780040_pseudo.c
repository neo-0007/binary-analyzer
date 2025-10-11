
int FUN_00780040(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int *param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  if (param_4 < 2) {
    *param_5 = 0x22;
    iVar2 = -2;
  }
  else {
    do {
      iVar2 = FUN_007b0770(param_1,param_3,param_4,&local_48);
      if (iVar2 == 2) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
        iVar2 = 0;
        goto LAB_007800e3;
      }
      if (iVar2 != 0) break;
      uVar3 = FUN_0077fdc0(param_3,param_2,param_3,param_4,param_5);
      iVar2 = FUN_007b0940(param_1,local_48,uVar3);
      if (iVar2 == 0) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
        iVar2 = 1;
        goto LAB_007800e3;
      }
    } while (iVar2 == 0x16);
    *param_5 = iVar2;
    iVar2 = (iVar2 != 0x22) - 2;
  }
LAB_007800e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

