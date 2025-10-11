
void FUN_00417010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_00419c10(param_3);
  lVar3 = (**(code **)(param_6 + 8))(puVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_004222c0(*puVar2);
    if (iVar1 != 0) {
      FUN_00419350(param_3,param_4,lVar3);
      FUN_004222e0(*puVar2);
      return;
    }
  }
  return;
}

