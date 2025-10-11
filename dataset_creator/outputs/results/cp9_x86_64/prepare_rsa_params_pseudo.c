
undefined4
prepare_rsa_params(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ASN1_STRING *str;
  void *ptr;
  undefined4 uVar4;
  long in_FS_OFFSET;
  long local_80;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_rsa_get0_pss_params_30();
  *param_4 = 0;
  iVar2 = RSA_test_flags(param_1,0xf000);
  if (iVar2 == 0) {
    *param_5 = 5;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (iVar2 == 0x1000) {
      iVar2 = ossl_rsa_pss_params_30_is_unrestricted(uVar3);
      if (iVar2 == 0) {
        ptr = (void *)0x0;
        local_80 = 0;
        bVar1 = false;
        iVar2 = WPACKET_init_null_der(local_78);
        if (iVar2 != 0) {
          while( true ) {
            iVar2 = ossl_DER_w_RSASSA_PSS_params(local_78,0xffffffff,uVar3);
            if (((iVar2 == 0) || (iVar2 = WPACKET_finish(local_78), iVar2 == 0)) ||
               (iVar2 = WPACKET_get_total_written(local_78,&local_80), iVar2 == 0))
            goto LAB_00453f80;
            WPACKET_cleanup(local_78);
            if ((local_80 == 0) || (bVar1)) break;
            bVar1 = true;
            ptr = CRYPTO_malloc((int)local_80,
                                "../providers/implementations/encode_decode/encode_key2any.c",0x35b)
            ;
            if ((ptr == (void *)0x0) ||
               (iVar2 = WPACKET_init_der(local_78,ptr,local_80), iVar2 == 0)) goto LAB_00453f80;
          }
          str = ASN1_STRING_new();
          if (str != (ASN1_STRING *)0x0) {
            uVar4 = 1;
            *param_5 = 0x10;
            ASN1_STRING_set0(str,ptr,(int)local_80);
            *param_4 = str;
            goto LAB_00453ef0;
          }
        }
LAB_00453f80:
        CRYPTO_free(ptr);
        uVar4 = 0;
      }
      else {
        *param_5 = 0xffffffff;
        uVar4 = 1;
      }
    }
  }
LAB_00453ef0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

