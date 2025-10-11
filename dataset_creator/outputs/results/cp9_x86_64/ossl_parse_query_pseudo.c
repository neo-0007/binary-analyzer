
undefined8 ossl_parse_query(undefined8 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  void *ptr;
  undefined8 uVar4;
  byte bVar5;
  char *pcVar6;
  char *local_40 [2];
  
  if ((param_2 == (char *)0x0) ||
     (local_40[0] = param_2, lVar3 = OPENSSL_sk_new(pd_compare), lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    while (iVar2 = ossl_ctype_check((int)*param_2,8), iVar2 != 0) {
      param_2 = param_2 + 1;
    }
    pcVar6 = param_2;
    local_40[0] = param_2;
    if (*param_2 == '\0') {
LAB_0042d701:
      ptr = (void *)0x0;
      uVar4 = stack_to_property_list(param_1,lVar3);
    }
    else {
      while (local_40[0] = pcVar6,
            ptr = CRYPTO_malloc(0x18,"../crypto/property/property_parse.c",0x184),
            ptr != (void *)0x0) {
        *(undefined8 *)((long)ptr + 0x10) = 0;
        pcVar6 = local_40[0];
        if (*local_40[0] == '-') {
          do {
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            iVar2 = ossl_ctype_check((int)*pcVar1,8);
          } while (iVar2 != 0);
          *(byte *)((long)ptr + 0xc) = *(byte *)((long)ptr + 0xc) & 0xfe;
          *(undefined4 *)((long)ptr + 8) = 2;
          local_40[0] = pcVar6;
          iVar2 = parse_name_constprop_0(param_1,local_40,1,ptr);
          if (iVar2 == 0) break;
        }
        else {
          if (*local_40[0] == '?') {
            do {
              pcVar1 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
              iVar2 = ossl_ctype_check((int)*pcVar1,8);
            } while (iVar2 != 0);
            bVar5 = 1;
            local_40[0] = pcVar6;
          }
          else {
            bVar5 = 0;
          }
          *(byte *)((long)ptr + 0xc) = *(byte *)((long)ptr + 0xc) & 0xfe | bVar5;
          iVar2 = parse_name_constprop_0(param_1,local_40,1,ptr);
          if (iVar2 == 0) break;
          pcVar6 = local_40[0];
          if (*local_40[0] == '=') {
            do {
              pcVar1 = pcVar6 + 1;
              pcVar6 = pcVar6 + 1;
              iVar2 = ossl_ctype_check((int)*pcVar1,8);
            } while (iVar2 != 0);
          }
          else {
            pcVar6 = local_40[0] + 2;
            iVar2 = OPENSSL_strncasecmp(local_40[0],&DAT_007d268c,2);
            if (iVar2 != 0) {
              *(undefined8 *)((long)ptr + 4) = 0;
              *(undefined4 *)((long)ptr + 0x10) = 1;
              goto LAB_0042d6d8;
            }
            while (iVar2 = ossl_ctype_check((int)*pcVar6,8), iVar2 != 0) {
              pcVar6 = pcVar6 + 1;
            }
            iVar2 = 1;
          }
          *(int *)((long)ptr + 8) = iVar2;
          local_40[0] = pcVar6;
          iVar2 = parse_value(param_1,local_40,ptr,param_3);
          if (iVar2 == 0) {
            *(undefined4 *)((long)ptr + 4) = 2;
          }
        }
LAB_0042d6d8:
        iVar2 = OPENSSL_sk_push(lVar3,ptr);
        pcVar6 = local_40[0];
        if (iVar2 == 0) break;
        if (*local_40[0] != ',') {
          if (*local_40[0] == '\0') goto LAB_0042d701;
          ERR_new();
          ptr = (void *)0x0;
          ERR_set_debug("../crypto/property/property_parse.c",0x1a9,"ossl_parse_query");
          uVar4 = 0;
          ERR_set_error(0x37,0x6e,"HERE-->%s",pcVar6);
          goto LAB_0042d763;
        }
        do {
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          iVar2 = ossl_ctype_check((int)*pcVar1,8);
        } while (iVar2 != 0);
      }
      uVar4 = 0;
    }
LAB_0042d763:
    CRYPTO_free(ptr);
    OPENSSL_sk_pop_free(lVar3,pd_free);
  }
  return uVar4;
}

