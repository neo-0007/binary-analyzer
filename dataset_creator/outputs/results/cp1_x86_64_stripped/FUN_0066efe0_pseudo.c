
void FUN_0066efe0(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0067e2d0(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0067c1e0(param_2);
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  cVar1 = FUN_00679bb0(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00679b10(param_2);
  }
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  cVar1 = FUN_00679b60(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_00679ac0(param_2);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}

