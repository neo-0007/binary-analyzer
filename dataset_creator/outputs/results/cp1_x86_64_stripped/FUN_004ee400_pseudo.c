
ulong FUN_004ee400(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(code **)(*param_1 + 0x38) != (code *)0x0) &&
     (uVar1 = (**(code **)(*param_1 + 0x38))(), (int)uVar1 == 0)) {
    return uVar1;
  }
  FUN_004efcc0(param_1[4]);
  lVar2 = FUN_004f07c0(param_2,param_1[3]);
  param_1[0xd] = param_1[0xd] + 1;
  param_1[4] = lVar2;
  return (ulong)(lVar2 != 0);
}

