
void FUN_006998a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2 + 0x58;
  FUN_0069dc60();
  *param_1 = &PTR_FUN_009384a8;
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = param_1 + 0xb;
  *(undefined4 *)(param_1 + 8) = uVar2;
  if (*(long *)(param_2 + 0x48) == lVar1) {
    FUN_00756660(param_1 + 0xb,lVar1,4);
  }
  else {
    param_1[9] = *(long *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(long *)(param_2 + 0x48) = lVar1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  param_1[10] = uVar3;
  *(undefined4 *)(param_2 + 0x58) = 0;
  return;
}

