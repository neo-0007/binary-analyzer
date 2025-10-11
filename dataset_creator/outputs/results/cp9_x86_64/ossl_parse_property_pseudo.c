
undefined8 ossl_parse_property(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int *ptr;
  undefined8 uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  if ((param_2 == (char *)0x0) || (lVar3 = OPENSSL_sk_new(pd_compare), lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    while (iVar2 = ossl_ctype_check((int)*param_2,8), iVar2 != 0) {
      param_2 = param_2 + 1;
    }
    local_48 = param_2;
    if (*param_2 == '\0') {
LAB_0042d40f:
      ptr = (int *)0x0;
      uVar4 = stack_to_property_list(param_1,lVar3);
    }
    else {
      while (local_48 = param_2,
            ptr = (int *)CRYPTO_malloc(0x18,"../crypto/property/property_parse.c",0x14b),
            ptr != (int *)0x0) {
        *(byte *)(ptr + 3) = *(byte *)(ptr + 3) & 0xfe;
        ptr[4] = 0;
        ptr[5] = 0;
        iVar2 = parse_name_constprop_0(param_1,&local_48,1,ptr);
        if (iVar2 == 0) break;
        ptr[2] = 0;
        if (*ptr == 0) {
          ERR_new();
          ERR_set_debug("../crypto/property/property_parse.c",0x154,"ossl_parse_property");
          uVar4 = 0;
          ERR_set_error(0x37,0x6c,"Unknown name HERE-->%s",param_2);
          goto LAB_0042d4d3;
        }
        pcVar5 = local_48;
        if (*local_48 == '=') {
          do {
            pcVar1 = pcVar5 + 1;
            pcVar5 = pcVar5 + 1;
            iVar2 = ossl_ctype_check((int)*pcVar1,8);
          } while (iVar2 != 0);
          local_48 = pcVar5;
          iVar2 = parse_value(param_1,&local_48,ptr,1);
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/property/property_parse.c",0x15a,"ossl_parse_property");
            uVar4 = 0;
            ERR_set_error(0x37,0x6b,"HERE-->%s",param_2);
            goto LAB_0042d4d3;
          }
        }
        else {
          ptr[1] = 0;
          ptr[4] = 1;
        }
        iVar2 = OPENSSL_sk_push(lVar3,ptr);
        pcVar5 = local_48;
        if (iVar2 == 0) break;
        param_2 = local_48;
        if (*local_48 != ',') {
          if (*local_48 == '\0') goto LAB_0042d40f;
          ERR_new();
          ptr = (int *)0x0;
          ERR_set_debug("../crypto/property/property_parse.c",0x16a,"ossl_parse_property");
          uVar4 = 0;
          ERR_set_error(0x37,0x6e,"HERE-->%s",pcVar5);
          goto LAB_0042d4d3;
        }
        do {
          pcVar5 = param_2 + 1;
          param_2 = param_2 + 1;
          iVar2 = ossl_ctype_check((int)*pcVar5,8);
        } while (iVar2 != 0);
      }
      uVar4 = 0;
    }
LAB_0042d4d3:
    CRYPTO_free(ptr);
    OPENSSL_sk_pop_free(lVar3,pd_free);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

