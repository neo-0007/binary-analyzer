
void ossl_dsa_generate_ffc_parameters
               (long param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    iVar1 = ossl_ffc_params_FIPS186_2_generate
                      (*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,(long)param_3,(long)param_4,
                       local_14,param_5);
  }
  else {
    iVar1 = ossl_ffc_params_FIPS186_4_generate
                      (*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,(long)param_3,(long)param_4,
                       local_14,param_5);
  }
  if (0 < iVar1) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

