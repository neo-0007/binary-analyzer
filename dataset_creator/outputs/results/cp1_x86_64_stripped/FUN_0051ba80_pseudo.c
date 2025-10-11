
ulong FUN_0051ba80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    if (DAT_00941054 == 0) {
      lVar3 = FUN_0051b900();
      if (lVar3 != 0) {
        lVar5 = (long)(int)DAT_00941050;
        DAT_00941050 = DAT_00941050 + 1;
        uVar1 = FUN_0040a250(lVar3);
        *(undefined4 *)(&DAT_00941040 + lVar5 * 4) = uVar1;
      }
      lVar3 = FUN_0051b9c0();
      if (lVar3 != 0) {
        lVar5 = (long)(int)DAT_00941050;
        DAT_00941050 = DAT_00941050 + 1;
        uVar1 = FUN_0040a250(lVar3);
        *(undefined4 *)(&DAT_00941040 + lVar5 * 4) = uVar1;
      }
      uVar4 = (ulong)(int)DAT_00941050;
      DAT_00941054 = 1;
      *(undefined4 *)(&DAT_00941040 + uVar4 * 4) = 0;
    }
    else {
      uVar4 = (ulong)DAT_00941050;
    }
    *param_3 = &DAT_00941040;
  }
  else {
    if (param_4 == 5) {
      uVar2 = FUN_0051b900();
      *param_2 = uVar2;
      return 1;
    }
    if (param_4 == 0x61) {
      uVar2 = FUN_0051b9c0();
      *param_2 = uVar2;
      return 1;
    }
    *param_2 = 0;
    uVar4 = 0;
  }
  return uVar4;
}

