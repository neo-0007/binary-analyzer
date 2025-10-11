
undefined8 FUN_00438900(long param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_004098f0();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x1890671)) {
    FUN_0076dc30(piVar1[1]);
    FUN_0076dc30(piVar1[2]);
    if (piVar1[5] == 1) {
      FUN_0076dc30(piVar1[4]);
    }
    FUN_0076efe0(0xcf,*(undefined8 *)(piVar1 + 6));
    return 1;
  }
  return 1;
}

