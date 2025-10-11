
void FUN_006700f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_006c31f0(0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2[1] = param_2;
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 2) = param_3;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  return;
}

