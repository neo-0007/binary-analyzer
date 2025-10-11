
long OSSL_HTTP_exchange(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  char acStack_e8 [200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("../crypto/http/http_client.c",0x3f7,"OSSL_HTTP_exchange");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    lVar3 = OSSL_HTTP_REQ_CTX_exchange(param_1);
    if (lVar3 == 0) {
      if (*(char **)(param_1 + 0xb8) == (char *)0x0) {
        uVar5 = ERR_peek_error();
        if (((uVar5 & 0x80000000) == 0) &&
           ((((uVar7 = (uint)(uVar5 >> 0x17) & 0xff, (char)(uVar5 >> 0x17) == '\x14' ||
              (uVar7 == 0x3d)) ||
             ((uVar2 = (uint)uVar5 & 0x7fffff, uVar2 == 0x67 || uVar2 == 0x93 && (uVar7 == 0x20))))
            || ((uVar7 == 0x3a && (uVar2 == 0x93)))))) {
          if (*(long *)(param_1 + 0x48) != 0) {
            pcVar4 = *(char **)(param_1 + 0x50);
            pcVar8 = ":";
            if (pcVar4 == (char *)0x0) {
              pcVar4 = "";
              pcVar8 = pcVar4;
            }
            puVar6 = &DAT_007d9762;
            if (*(int *)(param_1 + 0x38) == 0) {
              puVar6 = &DAT_008343a2;
            }
            BIO_snprintf(acStack_e8,200,"server=http%s://%s%s%s",puVar6,*(long *)(param_1 + 0x48),
                         pcVar8,pcVar4);
            ERR_add_error_data(1,acStack_e8);
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            ERR_add_error_data(2," proxy=");
          }
          if (uVar5 == 0) {
            pcVar4 = " violating the protocol";
            if (*(int *)(param_1 + 0x38) == 0) {
              pcVar4 = ", likely because it requires the use of TLS";
            }
            BIO_snprintf(acStack_e8,200," peer has disconnected%s",pcVar4);
            ERR_add_error_data(1,acStack_e8);
          }
        }
        lVar3 = 0;
      }
      else if (param_2 == (undefined8 *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/http/http_client.c",0x402,"OSSL_HTTP_exchange");
        ERR_set_error(0x3d,0x74,0);
      }
      else {
        pcVar4 = CRYPTO_strdup(*(char **)(param_1 + 0xb8),"../crypto/http/http_client.c",0x405);
        *param_2 = pcVar4;
      }
    }
    else {
      iVar1 = BIO_up_ref(lVar3);
      if (iVar1 == 0) {
        lVar3 = 0;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar3;
}

