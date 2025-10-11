
undefined8
FUN_00606780(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_3 = *(long *)((uint *)*param_4 + 2);
  }
  puVar1 = (uint *)FUN_006064f0(0,param_3,*(uint *)*param_4 & 0x10);
  uVar3 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar3 = *(undefined8 *)(*param_2 + 0x10);
    *puVar1 = *puVar1 | 4;
    *(undefined8 *)(puVar1 + 4) = uVar3;
    lVar2 = FUN_0061b780(param_1,puVar1,param_4,param_5,1);
    uVar3 = 1;
    if (lVar2 == 0) {
      FUN_00606480(puVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

