
undefined8 FUN_00406570(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if ((((*piVar1 - 0x80U & 0xffffff7f) == 0) && (*(long *)(piVar1 + 0xc) != 0)) &&
       (*(code **)(*(long *)(piVar1 + 10) + 0xf0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004065ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(piVar1 + 10) + 0xf0))();
      return uVar2;
    }
  }
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + 0xe0) != 0)) {
    uVar2 = FUN_0040aae0();
    uVar2 = FUN_00420b60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x004065e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0xe0))(*(undefined8 *)(param_1 + 0x38),uVar2);
    return uVar2;
  }
  return 0;
}

