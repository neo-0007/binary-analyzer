
void FUN_007aaf10(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 1;
  LOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    FUN_00709590(piVar1);
  }
  FUN_0076db00(*param_1,0,0);
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  LOCK();
  iVar2 = param_1[1];
  param_1[1] = 0;
  UNLOCK();
  if (1 < iVar2) {
    FUN_00709660(piVar1);
    return;
  }
  return;
}

