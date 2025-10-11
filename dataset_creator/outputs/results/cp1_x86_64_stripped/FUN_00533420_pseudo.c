
undefined8 FUN_00533420(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)FUN_004098f0();
  uVar1 = *puVar3;
  uVar2 = FUN_0040a180(param_1);
  lVar4 = FUN_004098f0(param_1);
  FUN_005664b0(lVar4 + 4,uVar2,param_2,uVar1);
  return 1;
}

