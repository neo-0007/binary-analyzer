
undefined8
FUN_00480120(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0047fd70(param_1,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 != (char *)0x0) &&
     (((*param_2 == '\0' || (iVar1 = FUN_0041c9c0(param_1 + 0x34,param_2), iVar1 != 0)) &&
      (iVar1 = FUN_0047f1c0(param_1,param_2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)))) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  if (lVar2 == 0) {
    lVar2 = FUN_00405f40();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_004801bb;
    }
  }
  iVar1 = FUN_004073f0(lVar2,*(undefined8 *)(param_1 + 0x20),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_004801bb:
  FUN_00406b90(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}

