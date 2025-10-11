
undefined8 FUN_0055ccc0(undefined8 param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(ushort)(*param_2 << 8 | *param_2 >> 8);
  if (0x7ff < uVar4 - 0xd800) {
LAB_0055cd08:
    iVar2 = 4;
    if (param_3 < 5) {
      iVar2 = param_3;
    }
    uVar3 = FUN_005b8930(param_1,iVar2,uVar4);
    return uVar3;
  }
  if (3 < param_3) {
    uVar1 = (ushort)(param_2[1] << 8 | param_2[1] >> 8) - 0xdc00;
    if (uVar1 < 0x400) {
      uVar4 = ((ulong)uVar1 | (uVar4 - 0xd800) * 0x400) + 0x10000;
      goto LAB_0055cd08;
    }
  }
  return 0xffffffff;
}

