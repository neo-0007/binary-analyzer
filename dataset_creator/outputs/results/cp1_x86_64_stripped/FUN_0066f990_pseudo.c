
void FUN_0066f990(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_006a6b10(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006a4ba0(param_2);
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  cVar1 = FUN_006a2620(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006a2580(param_2);
  }
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  cVar1 = FUN_006a25d0(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_006a2530(param_2);
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}

