
undefined4 addr_strings_part_0(undefined8 param_1,uint param_2,long *param_3,long *param_4)

{
  ushort uVar1;
  socklen_t __salen;
  int __ecode;
  sockaddr *__sa;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long in_FS_OFFSET;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined8 local_438 [127];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_448 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  puVar5 = local_438;
  for (lVar4 = 0x7e; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (param_2 != 0) {
    param_2 = 3;
  }
  *(undefined1 *)puVar5 = 0;
  __salen = BIO_ADDR_sockaddr_size(param_1);
  __sa = (sockaddr *)BIO_ADDR_sockaddr(param_1);
  __ecode = getnameinfo(__sa,__salen,local_448,0x401,local_468,0x20,param_2);
  if (__ecode != 0) {
    if (__ecode == -0xb) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_addr.c",0xe0,"addr_strings");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling getnameinfo()");
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_addr.c",0xe5,"addr_strings");
      pcVar2 = gai_strerror(__ecode);
      ERR_set_error(0x20,0x80002,pcVar2);
    }
    uVar6 = 0;
    goto LAB_005ac511;
  }
  if (local_468[0] == '\0') {
    uVar1 = BIO_ADDR_rawport(param_1);
    BIO_snprintf(local_468,0x20,"%d",(ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    if (param_3 != (long *)0x0) goto LAB_005ac4d9;
LAB_005ac540:
    if (param_4 != (long *)0x0) {
      pcVar2 = CRYPTO_strdup(local_468,"../crypto/bio/bio_addr.c",0xf8);
      *param_4 = (long)pcVar2;
      if (pcVar2 == (char *)0x0) {
LAB_005ac56f:
        CRYPTO_free(pcVar2);
        *param_4 = 0;
        goto LAB_005ac588;
      }
    }
LAB_005ac50b:
    uVar6 = 1;
  }
  else {
    if (param_3 == (long *)0x0) goto LAB_005ac540;
LAB_005ac4d9:
    pcVar2 = CRYPTO_strdup(local_448,"../crypto/bio/bio_addr.c",0xf6);
    *param_3 = (long)pcVar2;
    if (param_4 != (long *)0x0) {
      pcVar2 = CRYPTO_strdup(local_468,"../crypto/bio/bio_addr.c",0xf8);
      *param_4 = (long)pcVar2;
      if (*param_3 == 0) {
        CRYPTO_free((void *)0x0);
        *param_3 = 0;
        pcVar2 = (char *)*param_4;
      }
      else {
        if (*param_4 != 0) goto LAB_005ac50b;
        CRYPTO_free((void *)*param_3);
        *param_3 = 0;
        pcVar2 = (char *)*param_4;
      }
      goto LAB_005ac56f;
    }
    if (*param_3 != 0) goto LAB_005ac50b;
    CRYPTO_free((void *)0x0);
    *param_3 = 0;
LAB_005ac588:
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_addr.c",0x10e,"addr_strings");
    ERR_set_error(0x20,0xc0100,0);
    uVar6 = 0;
  }
LAB_005ac511:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

