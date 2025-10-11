
/* WARNING: Type propagation algorithm not settling */

stack_st_CONF_VALUE * X509V3_parse_list(char *line)

{
  byte bVar1;
  byte *ptr;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  stack_st_CONF_VALUE *psVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar9;
  long in_FS_OFFSET;
  stack_st_CONF_VALUE *local_48;
  long local_40;
  byte *pbVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (stack_st_CONF_VALUE *)0x0;
  ptr = (byte *)CRYPTO_strdup(line,"../crypto/x509/v3_utl.c",0x142);
  if (ptr == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_utl.c",0x144,"X509V3_parse_list");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    uVar2 = (ulong)*ptr;
    pbVar6 = ptr;
    if ((0xd < *ptr) || ((0xffffffffffffdbfeU >> (uVar2 & 0x3f) & 1) != 0)) {
      do {
        bVar1 = (byte)uVar2;
        pbVar8 = pbVar6;
        while (bVar1 != 0x3a) {
          while( true ) {
            pbVar7 = pbVar8 + 1;
            if ((char)uVar2 == ',') {
              *pbVar8 = 0;
              pcVar3 = (char *)strip_spaces(pbVar6);
              if (pcVar3 == (char *)0x0) {
                ERR_new();
                uVar9 = 0x15d;
                goto LAB_00589ba9;
              }
              X509V3_add_value(pcVar3,(char *)0x0,&local_48);
              bVar1 = *pbVar7;
              pbVar6 = pbVar7;
            }
            else {
              bVar1 = *pbVar7;
            }
            uVar2 = (ulong)bVar1;
            pbVar8 = pbVar7;
            if (0xd < bVar1) break;
            if ((0xffffffffffffdbfeU >> (uVar2 & 0x3f) & 1) == 0) goto LAB_00589a25;
          }
        }
        *pbVar8 = 0;
        pcVar3 = (char *)strip_spaces(pbVar6);
        if (pcVar3 == (char *)0x0) {
          ERR_new();
          uVar9 = 0x154;
          goto LAB_00589ba9;
        }
        bVar1 = pbVar8[1];
        while( true ) {
          pbVar8 = pbVar8 + 1;
          if ((bVar1 < 0xe) && ((0xffffffffffffdbfeU >> ((ulong)bVar1 & 0x3f) & 1) == 0)) {
            pcVar4 = (char *)strip_spaces();
            if (pcVar4 == (char *)0x0) {
              ERR_new();
              uVar9 = 0x178;
              goto LAB_00589c41;
            }
            X509V3_add_value(pcVar3,pcVar4,&local_48);
            goto LAB_00589a42;
          }
          if (bVar1 == 0x2c) break;
          bVar1 = pbVar8[1];
        }
        *pbVar8 = 0;
        pcVar4 = (char *)strip_spaces();
        if (pcVar4 == (char *)0x0) {
          ERR_new();
          uVar9 = 0x16a;
LAB_00589c41:
          ERR_set_debug("../crypto/x509/v3_utl.c",uVar9,"X509V3_parse_list");
          ERR_set_error(0x22,0x6d,0);
          goto LAB_00589bc4;
        }
        pbVar6 = pbVar8 + 1;
        X509V3_add_value(pcVar3,pcVar4,&local_48);
        uVar2 = (ulong)pbVar8[1];
      } while ((0xd < pbVar8[1]) || ((0xffffffffffffdbfeU >> (uVar2 & 0x3f) & 1) != 0));
    }
LAB_00589a25:
    pcVar3 = (char *)strip_spaces(pbVar6);
    if (pcVar3 != (char *)0x0) {
      X509V3_add_value(pcVar3,(char *)0x0,&local_48);
LAB_00589a42:
      CRYPTO_free(ptr);
      psVar5 = local_48;
      goto LAB_00589a57;
    }
    ERR_new();
    uVar9 = 0x17f;
LAB_00589ba9:
    ERR_set_debug("../crypto/x509/v3_utl.c",uVar9,"X509V3_parse_list");
    ERR_set_error(0x22,0x6c,0);
  }
LAB_00589bc4:
  CRYPTO_free(ptr);
  OPENSSL_sk_pop_free(local_48,X509V3_conf_free);
  psVar5 = (stack_st_CONF_VALUE *)0x0;
LAB_00589a57:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

