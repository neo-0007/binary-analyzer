
undefined8
FUN_0047dd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0047dc30(param_1,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0047d680(param_1,param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x178);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
  if (lVar2 == 0) {
    lVar2 = FUN_00405f40();
    *(long *)(param_1 + 0x178) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_0047dda9;
    }
  }
  iVar1 = FUN_004073f0(lVar2,*(undefined8 *)(param_1 + 0x170),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x178);
LAB_0047dda9:
  FUN_00406b90(uVar3);
  *(undefined8 *)(param_1 + 0x178) = 0;
  return 0;
}

