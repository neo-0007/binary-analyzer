
void FUN_004d4a80(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      lVar3 = FUN_00541980(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      if (lVar3 != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
          uVar1 = FUN_00541a80(lVar3);
          *(undefined8 *)(param_1 + 0x10) = uVar1;
        }
        uVar2 = FUN_00541a20(lVar3);
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
        uVar2 = FUN_00541a60(lVar3);
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        *(undefined4 *)(param_1 + 0x60) = uVar2;
      }
    }
    return;
  }
  return;
}

