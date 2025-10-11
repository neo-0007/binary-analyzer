
undefined8 FUN_005bf7f0(short *param_1,long param_2,undefined8 *param_3)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  
  uVar3 = 4;
  psVar2 = param_1 + 2;
  sVar1 = *param_1;
  if (sVar1 != 2) {
    psVar2 = param_1 + 4;
    uVar3 = 0x10;
    if (sVar1 != 10) {
      if (sVar1 != 1) {
        return 0;
      }
      psVar2 = param_1 + 1;
      uVar3 = thunk_FUN_007129d0(psVar2);
    }
  }
  if (param_2 != 0) {
    thunk_FUN_00713a50(param_2,psVar2,uVar3);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = uVar3;
  }
  return 1;
}

