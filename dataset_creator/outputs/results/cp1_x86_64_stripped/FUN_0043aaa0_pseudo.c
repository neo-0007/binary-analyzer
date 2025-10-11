
int FUN_0043aaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = FUN_004098f0();
  iVar2 = FUN_004098f0(param_1);
  puVar4 = (undefined8 *)FUN_00409cc0(param_1);
  uVar1 = puVar4[1];
  puVar5 = (undefined8 *)((ulong)(-iVar2 & 0xf) + lVar3);
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  iVar2 = FUN_005b12e0(param_2,param_3,puVar5,param_4);
  if (iVar2 != 0) {
    puVar4 = (undefined8 *)FUN_00409d90(param_1);
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
  }
  return iVar2;
}

