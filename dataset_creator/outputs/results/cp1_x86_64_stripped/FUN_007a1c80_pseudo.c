
long FUN_007a1c80(long param_1,uint param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  pcVar5 = "                ";
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0x20) && (pcVar5 = "0000000000000000", param_2 != 0x30)) {
    uVar2 = CONCAT44(0,param_2 & 0xff);
    pcVar5 = (char *)&local_58;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    local_58 = SUB168(auVar1 * ZEXT816(0x101010101010101),0);
    local_50 = SUB168(auVar1 * ZEXT816(0x101010101010101),8) + uVar2 * 0x101010101010101;
  }
  if (param_3 < 0x10) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xd8);
      if (0x827 < lVar3 - 0x93f160U) {
        FUN_00703130();
      }
      lVar3 = (**(code **)(lVar3 + 0x38))(param_1,pcVar5,0x10);
      lVar4 = lVar4 + lVar3;
      if (lVar3 != 0x10) goto LAB_007a1d87;
      param_3 = param_3 + -0x10;
    } while (0xf < param_3);
  }
  if (0 < param_3) {
    lVar3 = *(long *)(param_1 + 0xd8);
    if (0x827 < lVar3 - 0x93f160U) {
      FUN_00703130();
    }
    lVar3 = (**(code **)(lVar3 + 0x38))(param_1,pcVar5,(long)param_3);
    lVar4 = lVar4 + lVar3;
  }
LAB_007a1d87:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

