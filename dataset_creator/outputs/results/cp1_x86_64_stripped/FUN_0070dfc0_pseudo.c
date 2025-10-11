
undefined4 * FUN_0070dfc0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *local_20;
  
  iVar1 = DAT_0093e160;
  if (param_1 == &DAT_0093e160) {
    LOCK();
    DAT_0093e160 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660(&DAT_0093e160);
    }
    local_20 = (undefined4 *)FUN_0070c180();
    if (local_20 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_0070dad0(param_2,&DAT_0093e160);
      return puVar2;
    }
  }
  else {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660();
    }
    LOCK();
    bVar3 = DAT_0093e160 == 0;
    if (bVar3) {
      DAT_0093e160 = 1;
    }
    UNLOCK();
    local_20 = &DAT_0093e160;
    if (!bVar3) {
      local_20 = &DAT_0093e160;
      FUN_00709590(&DAT_0093e160);
    }
  }
  return local_20;
}

