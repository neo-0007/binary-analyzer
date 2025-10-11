
void FUN_0066ff10(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_006704c0();
  FUN_0066f990(param_1,param_1 + 0xd0);
  FUN_0066f990(param_2,param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_2 + 0xd8) = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_2 + 0xe0) = uVar2;
  uVar1 = *(undefined1 *)(param_1 + 0xe4);
  *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)(param_2 + 0xe4);
  *(undefined1 *)(param_2 + 0xe4) = uVar1;
  return;
}

