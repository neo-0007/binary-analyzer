
size_t get_entropy(DRBG_CTX *ctx,uchar **pout,int entropy,size_t min_len,size_t max_len)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined4 in_register_00000014;
  undefined4 in_R9D;
  long in_FS_OFFSET;
  DRBG_CTX *local_40;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = ctx;
  if (*(long *)(ctx + 0x30) == 0) {
    sVar3 = ossl_prov_get_entropy
                      (*(undefined8 *)(ctx + 8),pout,CONCAT44(in_register_00000014,entropy));
  }
  else if (*(long *)(ctx + 0x60) == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0xd3,"get_entropy");
    ERR_set_error(0x39,0xbb,0);
    sVar3 = 0;
  }
  else {
    iVar2 = get_parent_strength(ctx,&local_34);
    if (iVar2 != 0) {
      if (local_34 < *(uint *)(local_40 + 0x80)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg.c",0xdd,"get_entropy");
        ERR_set_error(0x39,0xc2,0);
      }
      else {
        iVar2 = ossl_drbg_lock_parent();
        if (iVar2 != 0) {
          sVar3 = (**(code **)(local_40 + 0x60))
                            (*(undefined8 *)(local_40 + 0x30),pout,*(undefined4 *)(local_40 + 0x80),
                             min_len,max_len,in_R9D);
          if ((*(long *)(local_40 + 0x30) != 0) &&
             (pcVar1 = *(code **)(local_40 + 0x48), pcVar1 != (code *)0x0)) {
            (*pcVar1)(*(long *)(local_40 + 0x30),8,pcVar1,&local_40);
          }
          goto LAB_0059f512;
        }
      }
    }
    sVar3 = 0;
  }
LAB_0059f512:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

