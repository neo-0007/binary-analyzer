
ulong FUN_004ee8b0(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(code **)(*param_1 + 0x28) != (code *)0x0) &&
     (uVar2 = (**(code **)(*param_1 + 0x28))(), (int)uVar2 == 0)) {
    return uVar2;
  }
  FUN_004efd00(param_1[3]);
  lVar3 = FUN_004f0340(param_2);
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    iVar1 = FUN_004ef870();
    if (iVar1 == 0x494) {
      FUN_004ee8a0(param_1,4);
    }
    lVar3 = param_1[3];
  }
  param_1[0xd] = param_1[0xd] + 1;
  return (ulong)(lVar3 != 0);
}

