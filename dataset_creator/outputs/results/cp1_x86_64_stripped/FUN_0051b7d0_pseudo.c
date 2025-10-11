
ulong FUN_0051b7d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (DAT_00941064 == 0) {
      lVar3 = FUN_0051b6f0();
      if (lVar3 != 0) {
        lVar5 = (long)(int)DAT_00941060;
        DAT_00941060 = DAT_00941060 + 1;
        uVar1 = FUN_0040aaf0(lVar3);
        *(undefined4 *)(&DAT_00941058 + lVar5 * 4) = uVar1;
      }
      uVar4 = (ulong)(int)DAT_00941060;
      DAT_00941064 = 1;
      *(undefined4 *)(&DAT_00941058 + uVar4 * 4) = 0;
    }
    else {
      uVar4 = (ulong)DAT_00941060;
    }
    *param_3 = &DAT_00941058;
  }
  else {
    if (param_4 == 0x40) {
      uVar2 = FUN_0051b6f0();
      *param_2 = uVar2;
      return 1;
    }
    *param_2 = 0;
    uVar4 = 0;
  }
  return uVar4;
}

