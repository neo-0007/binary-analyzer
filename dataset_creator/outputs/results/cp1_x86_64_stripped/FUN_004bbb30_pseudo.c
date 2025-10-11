
bool FUN_004bbb30(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_004b8260();
  if (lVar2 != 0) {
    FUN_004b7b50(param_1 + 0x18);
    uVar1 = FUN_004b7bb0(param_2);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return lVar2 != 0;
}

