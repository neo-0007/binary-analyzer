
void FUN_0040eda0(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 2);
  local_18 = 0;
  if ((lVar2 != 0) ||
     ((lVar3 = *(long *)(param_1 + 10), *(long *)(param_1 + 10) != 0 &&
      (lVar2 = FUN_004a1430(&local_18,*param_1), lVar3 = local_18, lVar2 != 0)))) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
    if (*(code **)(lVar2 + 0xa8) != (code *)0x0) {
      (**(code **)(lVar2 + 0xa8))(param_1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
    lVar3 = local_18;
  }
  FUN_0051a270(lVar3);
  FUN_0051a270(*(undefined8 *)(param_1 + 4));
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_0051a270(*(undefined8 *)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = 0;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

