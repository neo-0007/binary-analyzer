
long v2i_IPAddrBlocks(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  size_t sVar7;
  size_t sVar8;
  uintmax_t uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 *__accept;
  long in_FS_OFFSET;
  long local_b0;
  uint *local_a8;
  undefined4 local_88;
  uint local_74;
  char *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  iVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = OPENSSL_sk_new(IPAddressFamily_cmp);
  if (local_b0 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_addr.c",899,"v2i_IPAddrBlocks");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    for (; iVar2 = OPENSSL_sk_num(param_3), iVar11 < iVar2; iVar11 = iVar11 + 1) {
      __accept = v4addr_chars_3;
      lVar5 = OPENSSL_sk_value(param_3,iVar11);
      iVar3 = ossl_v3_name_cmp(*(undefined8 *)(lVar5 + 8),&DAT_00810b8e);
      iVar2 = 4;
      local_88 = 1;
      if (iVar3 == 0) {
LAB_006064e5:
        pcVar6 = CRYPTO_strdup(*(char **)(lVar5 + 0x10),"../crypto/x509/v3_addr.c",0x3b8);
        local_a8 = (uint *)0x0;
      }
      else {
        iVar3 = ossl_v3_name_cmp(*(undefined8 *)(lVar5 + 8),&DAT_00810b96);
        iVar2 = 0x10;
        local_88 = 2;
        __accept = "0123456789.:abcdefABCDEF";
        if (iVar3 == 0) goto LAB_006064e5;
        __accept = v4addr_chars_3;
        iVar3 = ossl_v3_name_cmp(*(undefined8 *)(lVar5 + 8),"IPv4-SAFI");
        iVar2 = 4;
        local_88 = 1;
        if (iVar3 != 0) {
          iVar2 = ossl_v3_name_cmp(*(undefined8 *)(lVar5 + 8),"IPv6-SAFI");
          if (iVar2 != 0) {
            ERR_new();
            pcVar6 = (char *)0x0;
            ERR_set_debug("../crypto/x509/v3_addr.c",0x399,"v2i_IPAddrBlocks");
            ERR_set_error(0x22,0x73,&DAT_007d9761,*(undefined8 *)(lVar5 + 8));
            goto LAB_00606761;
          }
          iVar2 = 0x10;
          local_88 = 2;
          __accept = "0123456789.:abcdefABCDEF";
        }
        uVar9 = strtouq(*(char **)(lVar5 + 0x10),&local_70,0);
        pcVar6 = local_70;
        local_74 = (uint)uVar9;
        sVar7 = strspn(local_70," \t");
        local_70 = pcVar6 + sVar7;
        if ((0xff < (uint)uVar9) ||
           (pcVar6 = local_70 + 1, cVar1 = *local_70, local_70 = pcVar6, cVar1 != ':')) {
          ERR_new();
          pcVar6 = (char *)0x0;
          ERR_set_debug("../crypto/x509/v3_addr.c",0x3b1,"v2i_IPAddrBlocks");
          ERR_set_error(0x22,0xa4,0);
          ERR_add_error_data(4,"name=",*(undefined8 *)(lVar5 + 8),", value=",
                             *(undefined8 *)(lVar5 + 0x10));
          goto LAB_00606761;
        }
        sVar7 = strspn(pcVar6," \t");
        local_70 = pcVar6 + sVar7;
        pcVar6 = CRYPTO_strdup(local_70,"../crypto/x509/v3_addr.c",0x3b6);
        local_a8 = &local_74;
      }
      if (pcVar6 == (char *)0x0) {
        ERR_new();
        uVar10 = 0x3bb;
        goto LAB_00606870;
      }
      iVar3 = strcmp(pcVar6,"inherit");
      if (iVar3 != 0) {
        sVar7 = strspn(pcVar6,__accept);
        sVar8 = strspn(pcVar6 + (int)sVar7," \t");
        iVar4 = (int)sVar8 + (int)sVar7;
        iVar3 = iVar4 + 1;
        cVar1 = pcVar6[iVar4];
        pcVar6[(int)sVar7] = '\0';
        iVar4 = ossl_a2i_ipadd(local_68,pcVar6);
        if (iVar4 == iVar2) {
          if (cVar1 == '-') {
            sVar7 = strspn(pcVar6 + iVar3," \t");
            iVar3 = iVar3 + (int)sVar7;
            sVar7 = strspn(pcVar6 + iVar3,__accept);
            iVar4 = (int)sVar7 + iVar3;
            if ((iVar3 == iVar4) || (pcVar6[iVar4] != '\0')) {
              ERR_new();
              uVar10 = 0x3ea;
            }
            else {
              iVar3 = ossl_a2i_ipadd(local_58,pcVar6 + iVar3);
              if (iVar3 != iVar2) {
                ERR_new();
                ERR_set_debug("../crypto/x509/v3_addr.c",0x3ef,"v2i_IPAddrBlocks");
                uVar10 = 0xa6;
                goto LAB_00606733;
              }
              iVar2 = bcmp(local_68,local_58,(long)iVar2);
              if (iVar2 < 1) {
                iVar2 = X509v3_addr_add_range(local_b0,local_88,local_a8,local_68,local_58);
                if (iVar2 != 0) goto LAB_006067e6;
                ERR_new();
                uVar10 = 0x3f9;
                goto LAB_00606870;
              }
              ERR_new();
              uVar10 = 0x3f4;
            }
          }
          else if (cVar1 == '/') {
            uVar9 = strtouq(pcVar6 + iVar3,&local_70,10);
            if ((pcVar6 + iVar3 != local_70) && (*local_70 == '\0')) {
              iVar2 = X509v3_addr_add_prefix(local_b0,local_88,local_a8,local_68,uVar9 & 0xffffffff)
              ;
              if (iVar2 != 0) goto LAB_006067e6;
              ERR_new();
              uVar10 = 0x3e2;
              goto LAB_00606870;
            }
            ERR_new();
            uVar10 = 0x3dd;
          }
          else {
            if (cVar1 == '\0') {
              iVar2 = X509v3_addr_add_prefix(local_b0,local_88,local_a8,local_68,iVar2 << 3);
              if (iVar2 != 0) {
LAB_006067e6:
                CRYPTO_free(pcVar6);
                goto LAB_00606552;
              }
              ERR_new();
              uVar10 = 0x3ff;
LAB_00606870:
              ERR_set_debug("../crypto/x509/v3_addr.c",uVar10,"v2i_IPAddrBlocks");
              ERR_set_error(0x22,0xc0100,0);
              goto LAB_00606761;
            }
            ERR_new();
            uVar10 = 0x404;
          }
          ERR_set_debug("../crypto/x509/v3_addr.c",uVar10,"v2i_IPAddrBlocks");
          uVar10 = 0x74;
        }
        else {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_addr.c",0x3d4,"v2i_IPAddrBlocks");
          uVar10 = 0xa6;
        }
LAB_00606733:
        ERR_set_error(0x22,uVar10,0);
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar5 + 8),", value=",
                           *(undefined8 *)(lVar5 + 0x10));
        goto LAB_00606761;
      }
      iVar2 = X509v3_addr_add_inherit(local_b0,local_88,local_a8);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_addr.c",0x3c5,"v2i_IPAddrBlocks");
        uVar10 = 0xa5;
        goto LAB_00606733;
      }
      CRYPTO_free(pcVar6);
LAB_00606552:
    }
    iVar11 = X509v3_addr_canonize(local_b0);
    if (iVar11 == 0) {
      pcVar6 = (char *)0x0;
LAB_00606761:
      CRYPTO_free(pcVar6);
      OPENSSL_sk_pop_free(local_b0,IPAddressFamily_free);
      local_b0 = 0;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_b0;
}

