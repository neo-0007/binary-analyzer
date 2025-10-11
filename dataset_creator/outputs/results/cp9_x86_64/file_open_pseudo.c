
long file_open(undefined8 param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  BIO *a;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_110;
  char *local_f8;
  byte local_f0 [8];
  undefined8 uStack_e8;
  byte abStack_e0 [8];
  stat64 local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ERR_set_mark();
  local_f0[0] = local_f0[0] & 0xfe;
  local_f8 = param_2;
  iVar2 = OPENSSL_strncasecmp(param_2,"file:",5);
  if (iVar2 == 0) {
    pcVar6 = param_2 + 5;
    if ((param_2[5] == '/') && (param_2[6] == '/')) {
      pcVar6 = param_2 + 7;
      iVar2 = OPENSSL_strncasecmp(pcVar6,"localhost/",10);
      if (iVar2 == 0) {
        local_110 = 1;
        pcVar6 = param_2 + 0x10;
        lVar3 = 0;
      }
      else {
        local_110 = 1;
        lVar3 = 0;
        if (param_2[7] != '/') {
          ERR_clear_last_mark();
          lVar3 = 0;
          ERR_new();
          ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0xe8,"file_open");
          ERR_set_error(0x39,0xdf,0);
          goto LAB_00480876;
        }
      }
    }
    else {
      local_110 = 2;
      lVar3 = 1;
    }
    *(char **)(local_f0 + lVar3 * 0x10 + -8) = pcVar6;
    local_f0[lVar3 * 0x10] = local_f0[lVar3 * 0x10] | 1;
    bVar1 = local_f0[0] & 1;
    pcVar6 = local_f8;
  }
  else {
    local_110 = 1;
    bVar1 = 0;
    pcVar6 = param_2;
  }
  lVar3 = 0;
  while( true ) {
    if ((bVar1 != 0) && (*pcVar6 != '/')) {
      ERR_clear_last_mark();
      lVar3 = 0;
      ERR_new();
      ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x105,"file_open");
      ERR_set_error(0x39,0xdb,"Given path=%s",pcVar6);
      goto LAB_00480876;
    }
    iVar2 = stat64(pcVar6,&local_d8);
    if (-1 < iVar2) {
      ERR_pop_to_mark();
      if ((local_d8.st_mode & 0xf000) == 0x4000) {
        lVar3 = new_file_ctx(1,param_2,param_1);
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0xaf,"file_open_dir");
          ERR_set_error(0x39,0xc0100,0);
        }
        else {
          lVar4 = OPENSSL_DIR_read(lVar3 + 0x18,pcVar6);
          *(long *)(lVar3 + 0x30) = lVar4;
          piVar5 = __errno_location();
          iVar2 = *piVar5;
          *(int *)(lVar3 + 0x38) = iVar2;
          if (lVar4 == 0) {
            if (iVar2 == 0) {
              *(undefined4 *)(lVar3 + 0x20) = 1;
            }
            else {
              ERR_new();
              ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0xb7,
                            "file_open_dir");
              ERR_set_error(2,*(undefined4 *)(lVar3 + 0x38),"Calling OPENSSL_DIR_read(\"%s\")",
                            pcVar6);
              file_close(lVar3);
              lVar3 = 0;
            }
          }
        }
        goto LAB_00480876;
      }
      a = BIO_new_file(pcVar6,"rb");
      if (a != (BIO *)0x0) {
        lVar3 = new_file_ctx(0,param_2,param_1);
        if (lVar3 != 0) {
          *(BIO **)(lVar3 + 0x18) = a;
          goto LAB_00480876;
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x9e,"file_open_stream")
        ;
        ERR_set_error(0x39,0xc0100,0);
      }
      BIO_free_all(a);
      lVar3 = 0;
      goto LAB_00480876;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x10b,"file_open");
    lVar3 = lVar3 + 1;
    piVar5 = __errno_location();
    ERR_set_error(2,*piVar5,"calling stat(%s)",pcVar6);
    if (local_110 == lVar3) break;
    pcVar6 = *(char **)(local_f0 + lVar3 * 0x10 + -8);
    bVar1 = local_f0[lVar3 * 0x10] & 1;
  }
  ERR_clear_last_mark();
  lVar3 = 0;
LAB_00480876:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

