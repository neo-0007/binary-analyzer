
undefined8 FUN_0051dc30(uint param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0051dbd0();
  if ((int)uVar3 != 0) {
    uVar1 = *param_2;
    puVar2 = param_2;
    while (uVar1 != 0) {
      *puVar2 = uVar1 | (param_1 & 0xff) << 0x17;
      uVar1 = puVar2[2];
      puVar2 = puVar2 + 2;
    }
    FUN_0051d9f0(param_2);
    uVar3 = 1;
  }
  return uVar3;
}

