
void FUN_0066f5b0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_006704c0();
  FUN_0066efe0(param_1,param_1 + 0xd0);
  FUN_0066efe0(param_2,param_2 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = uVar2;
  uVar1 = *(undefined1 *)(param_1 + 0xe0);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined1 *)(param_2 + 0xe0) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xe1);
  *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0xe1);
  *(undefined1 *)(param_2 + 0xe1) = uVar1;
  return;
}

