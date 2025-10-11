
undefined8 EVP_PKEY_CTX_get_params(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar3;
  
  iVar1 = evp_pkey_ctx_state();
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      return 0;
    }
    uVar3 = evp_pkey_ctx_get_params_to_ctrl(param_1,param_2);
    return uVar3;
  }
  if (iVar1 != 2) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x70);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return 0;
    }
    goto LAB_004128d9;
  }
  if (iVar1 < 0x41) {
    if (iVar1 < 0x10) {
LAB_0041289c:
      if ((iVar1 - 0x200U & 0xfffffdff) == 0) {
        if (*(long *)(param_1 + 10) == 0) {
          return 0;
        }
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x68);
        goto joined_r0x00412952;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar1 - 0x10) & 0x3f) & 1) != 0) goto LAB_0041293f;
    if ((iVar1 - 0x1000U & 0xffffefff) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar1 - 0x80U & 0xffffff7f) != 0) goto LAB_0041289c;
LAB_0041293f:
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0xb8);
joined_r0x00412952:
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
      return uVar3;
    }
    if ((iVar1 - 0x1000U & 0xffffefff) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 10);
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar2 + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    return 0;
  }
LAB_004128d9:
                    /* WARNING: Could not recover jumptable at 0x004128e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
  return uVar3;
}

