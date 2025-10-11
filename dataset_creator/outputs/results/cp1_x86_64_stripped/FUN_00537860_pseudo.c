
ulong FUN_00537860(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(byte *)(*param_1 + 0x11) & 2) == 0) {
    uVar2 = FUN_0040a4a0();
    uVar2 = FUN_00420cf0(uVar2);
    iVar1 = FUN_0040a180(param_1);
    uVar3 = 0;
    if (0 < iVar1) {
      iVar1 = FUN_00429760(uVar2,param_2,(long)iVar1,0);
      uVar3 = (ulong)(0 < iVar1);
    }
    return uVar3;
  }
  uVar3 = FUN_00536c00(param_1,6,0,param_2);
  return uVar3;
}

