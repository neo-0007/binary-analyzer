
undefined8
EVP_PBE_find_ex(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_005f480b;
  local_58 = param_1;
  local_54 = param_2;
  if (pbe_algs == 0) {
LAB_005f4830:
    pvVar2 = OBJ_bsearch_(&local_58,builtin_pbe,0x1d,0x20,pbe2_cmp_BSEARCH_CMP_FN);
    uVar3 = 0;
    if (pvVar2 == (void *)0x0) goto LAB_005f480b;
  }
  else {
    uVar1 = OPENSSL_sk_find(pbe_algs,&local_58,0);
    pvVar2 = (void *)OPENSSL_sk_value(pbe_algs,uVar1);
    if (pvVar2 == (void *)0x0) goto LAB_005f4830;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((long)pvVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)((long)pvVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)((long)pvVar2 + 0x10);
  }
  uVar3 = 1;
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = *(undefined8 *)((long)pvVar2 + 0x18);
  }
LAB_005f480b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

