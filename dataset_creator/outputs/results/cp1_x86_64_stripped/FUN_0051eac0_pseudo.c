
undefined8 FUN_0051eac0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar2 = FUN_0051e1a0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = (long)*(int *)(lVar2 + 0x380);
  lVar3 = lVar4 + 0x80;
  uVar1 = *(uint *)(lVar2 + lVar3 * 4) & 1;
  if (uVar1 == 0) {
    lVar6 = lVar4 + 0x20;
    lVar4 = lVar4 + 0x30;
    *(undefined8 *)(lVar2 + lVar6 * 8) = 0;
    *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
    *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
    goto LAB_0051eb87;
  }
  lVar6 = lVar2 + lVar4 * 8;
  puVar5 = *(undefined1 **)(lVar6 + 0x100);
  if (param_4 == 0) {
    lVar6 = lVar4 + 0x20;
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
      goto LAB_0051eb23;
    }
  }
  else {
    FUN_0041ad60(puVar5,"../crypto/err/err_local.h",0x18);
    uVar1 = 0;
    *(undefined8 *)(lVar6 + 0x100) = 0;
    *(undefined8 *)(lVar6 + 0x180) = 0;
LAB_0051eb23:
    lVar4 = (long)*(int *)(lVar2 + 0x380);
    *(uint *)(lVar2 + lVar3 * 4) = uVar1;
    lVar6 = lVar4 + 0x20;
    lVar3 = lVar4 + 0x80;
    if ((*(byte *)(lVar2 + 0x200 + lVar4 * 4) & 1) == 0) {
      lVar4 = lVar4 + 0x30;
      goto LAB_0051eb87;
    }
    puVar5 = *(undefined1 **)(lVar2 + lVar6 * 8);
  }
  lVar4 = lVar4 + 0x30;
  FUN_0041ad60(puVar5,"../crypto/err/err_local.h",0x49);
LAB_0051eb87:
  *(undefined8 *)(lVar2 + lVar6 * 8) = param_1;
  *(undefined8 *)(lVar2 + lVar4 * 8) = param_2;
  *(undefined4 *)(lVar2 + lVar3 * 4) = param_3;
  return 1;
}

