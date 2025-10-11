
uint FUN_0063e1d0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_2 < 0x80) && (*(char *)(param_1 + 0x18) != '\0')) {
    return (uint)*(byte *)(param_1 + 0x19 + (long)(int)param_2);
  }
  uVar2 = FUN_006e1eb0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_00756850(param_2);
  FUN_006e1eb0(uVar2);
  if (uVar1 != 0xffffffff) {
    param_3 = uVar1;
  }
  return param_3;
}

