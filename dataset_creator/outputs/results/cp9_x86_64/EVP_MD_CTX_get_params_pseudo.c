
undefined8 EVP_MD_CTX_get_params(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if ((((*piVar1 - 0x80U & 0xffffff7f) == 0) && (*(long *)(piVar1 + 0xc) != 0)) &&
       (*(code **)(*(long *)(piVar1 + 10) + 0xd8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00518a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(piVar1 + 10) + 0xd8))(*(long *)(piVar1 + 0xc));
      return uVar3;
    }
  }
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0xc0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00518a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar2 + 0xd0))(*(undefined8 *)(param_1 + 0x38));
    return uVar3;
  }
  return 0;
}

