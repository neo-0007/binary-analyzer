
void OSSL_CMP_print_errors_cb(code *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  BIO *a;
  uint uVar5;
  long in_FS_OFFSET;
  uint local_1170;
  undefined4 local_1168;
  byte local_1164 [4];
  undefined8 local_1160;
  char *local_1158;
  long local_1150;
  char local_1148 [256];
  char local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1160 = 0;
  local_1158 = (char *)0x0;
  local_1150 = 0;
LAB_004bf888:
  do {
    uVar2 = ERR_get_error_all(&local_1160,&local_1168,&local_1158,&local_1150,local_1164);
    if (uVar2 == 0) goto LAB_004bf969;
    pcVar3 = ERR_lib_error_string(uVar2);
    pcVar4 = local_1158;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "(unknown function)";
      if (local_1158 != (char *)0x0) {
        pcVar3 = pcVar4;
      }
    }
    else if (((local_1158 != (char *)0x0) && (*local_1158 != '\0')) &&
            (iVar1 = strcmp(local_1158,"(unknown function)"), iVar1 != 0)) {
      pcVar3 = pcVar4;
    }
    uVar5 = (uint)uVar2;
    if ((uVar2 & 0x80000000) == 0) {
      pcVar4 = ERR_reason_error_string(uVar2);
      if (pcVar4 == (char *)0x0) {
        uVar2 = (ulong)(uVar5 & 0x7fffff);
LAB_004bf9c7:
        pcVar4 = local_1148;
        BIO_snprintf(pcVar4,0x100,"reason(%lu)",uVar2);
      }
    }
    else {
      pcVar4 = local_1148;
      local_1170 = uVar5 & 0x7fffffff;
      iVar1 = openssl_strerror_r(uVar5 & 0x7fffffff,pcVar4,0x100);
      if (iVar1 == 0) {
        uVar2 = (ulong)(int)local_1170;
        goto LAB_004bf9c7;
      }
    }
    if ((local_1150 == 0) || ((local_1164[0] & 2) == 0)) {
      BIO_snprintf(local_1048,0x1000,"%s",pcVar4);
    }
    else {
      BIO_snprintf(local_1048,0x1000,"%s:%s",pcVar4);
    }
    if (param_1 == (code *)0x0) {
      a = BIO_new_fp((FILE *)stderr,0);
      if (a != (BIO *)0x0) {
        OSSL_CMP_print_to_bio(a,pcVar3,local_1160,local_1168,3,local_1048);
        BIO_free(a);
      }
      goto LAB_004bf888;
    }
    iVar1 = (*param_1)(pcVar3,local_1160,local_1168,3,local_1048);
    if (iVar1 < 1) {
LAB_004bf969:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
  } while( true );
}

