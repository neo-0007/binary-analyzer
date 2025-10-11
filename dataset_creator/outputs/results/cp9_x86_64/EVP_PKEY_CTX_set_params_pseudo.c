
undefined8 EVP_PKEY_CTX_set_params(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar3;
  
  iVar2 = evp_pkey_ctx_state();
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      return 0;
    }
    uVar3 = evp_pkey_ctx_set_params_to_ctrl(param_1,param_2);
    return uVar3;
  }
  if (iVar2 != 2) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x60);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return 0;
    }
    goto LAB_004127bd;
  }
  if (iVar2 < 0x41) {
    if (iVar2 < 0x10) {
LAB_0041272c:
      if (((iVar2 - 0x200U & 0xfffffdff) == 0) && (*(long *)(param_1 + 10) != 0)) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x78);
        goto joined_r0x004127f2;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar2 - 0x10) & 0x3f) & 1) != 0) goto LAB_004127df;
  }
  else {
    if ((iVar2 - 0x80U & 0xffffff7f) != 0) goto LAB_0041272c;
LAB_004127df:
    if (*(long *)(param_1 + 10) == 0) goto LAB_00412783;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 200);
joined_r0x004127f2:
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
      return uVar3;
    }
  }
LAB_00412783:
  if ((((iVar2 - 2U & 0xfffffffd) == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0x70) != 0)) {
    uVar3 = evp_keymgmt_gen_set_params(lVar1,*(undefined8 *)(param_1 + 10),param_2);
    return uVar3;
  }
  if ((((iVar2 - 0x1000U & 0xffffefff) != 0) || (*(long *)(param_1 + 10) == 0)) ||
     (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x78),
     UNRECOVERED_JUMPTABLE_00 == (code *)0x0)) {
    return 0;
  }
LAB_004127bd:
                    /* WARNING: Could not recover jumptable at 0x004127cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
  return uVar3;
}

