
void * ossl_namemap_stored(undefined8 param_1)

{
  int iVar1;
  void *arg;
  EVP_PKEY_ASN1_METHOD *ameth;
  int idx;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  uint local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  arg = (void *)ossl_lib_ctx_get_data(param_1,4,stored_namemap_method);
  if (arg != (void *)0x0) {
    iVar1 = ossl_namemap_empty(arg);
    if (-1 < iVar1) {
      if (iVar1 == 1) {
        OPENSSL_init_crypto(0xc,0);
        OBJ_NAME_do_all(2,get_legacy_cipher_names,arg);
        OBJ_NAME_do_all(1,get_legacy_md_names,arg);
        iVar1 = EVP_PKEY_asn1_get_count();
        if (0 < iVar1) {
          idx = 0;
          do {
            ameth = EVP_PKEY_asn1_get0(idx);
            local_54 = 0;
            local_50 = 0;
            local_4c = 0;
            local_48 = (char *)0x0;
            EVP_PKEY_asn1_get0_info
                      (&local_54,&local_50,(int *)&local_4c,(char **)0x0,&local_48,ameth);
            if (local_54 != 0) {
              if ((local_4c & 1) == 0) {
                if (local_54 == 0x398) {
                  get_legacy_evp_names(0,0x398,&DAT_007c4f5d,arg);
                }
                get_legacy_evp_names(0,local_54,local_48);
              }
              else if (local_54 == 0x494) {
                get_legacy_evp_names(0,0x494,local_48);
              }
              else {
                get_legacy_evp_names(local_50,local_54,local_48);
              }
            }
            idx = idx + 1;
          } while (iVar1 != idx);
        }
      }
      goto LAB_0041716c;
    }
  }
  arg = (void *)0x0;
LAB_0041716c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return arg;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

