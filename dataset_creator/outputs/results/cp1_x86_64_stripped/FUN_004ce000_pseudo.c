
undefined8 FUN_004ce000(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (DAT_00940ff8 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      uVar3 = 0;
      uVar1 = 0;
      uVar2 = 0x32;
    }
    else {
      uVar1 = *param_1;
      uVar3 = param_1[1];
      uVar2 = param_1[2];
    }
    uVar1 = FUN_004cde00(uVar1,uVar3,uVar2);
    DAT_00940ff8 = 1;
    return uVar1;
  }
  return 1;
}

