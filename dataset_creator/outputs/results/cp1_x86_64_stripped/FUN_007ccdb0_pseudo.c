
void FUN_007ccdb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((undefined *)param_1[0x17] != &DAT_00919160) {
    FUN_006e6430();
  }
  if (param_1[0xf] != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        puVar1 = (undefined8 *)(param_1[0xe] + uVar2 * 0x18);
        FUN_007104f0(*puVar1);
        if (puVar1[2] - 1 < 0xfffffffffffffffe) {
          FUN_007104f0();
        }
        if (puVar1[1] == -1) break;
        FUN_006d3060();
        uVar2 = uVar2 + 1;
        if ((ulong)param_1[0xf] <= uVar2) goto LAB_007cce1e;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)param_1[0xf]);
  }
LAB_007cce1e:
  FUN_007104f0(param_1[0xe]);
  FUN_007104f0(param_1[4]);
  if (*(int *)(param_1 + 1) == 0) {
    FUN_007104f0(*param_1);
    FUN_007104f0(param_1);
    return;
  }
  FUN_0076f080(*param_1,param_1[2]);
  FUN_007104f0(param_1);
  return;
}

