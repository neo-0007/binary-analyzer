
char * UI_construct_prompt(UI *ui_method,char *object_desc,char *object_name)

{
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined2 local_39;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ui_method != (UI *)0x0) && (*(long *)ui_method != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)ui_method + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00582ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar1 = (char *)(*UNRECOVERED_JUMPTABLE)(ui_method,object_desc,object_name);
      return pcVar1;
    }
    goto LAB_00582c64;
  }
  local_37 = 0x65746e45;
  local_33 = 0x2072;
  local_31 = 0;
  local_3d = 0x726f6620;
  local_39 = 0x20;
  local_3f = 0x3a;
  if (object_desc == (char *)0x0) {
LAB_00582c5c:
    pcVar1 = (char *)0x0;
  }
  else {
    sVar2 = strlen(object_desc);
    if (object_name == (char *)0x0) {
      iVar4 = (int)sVar2 + 8;
      lVar5 = (long)iVar4;
      pcVar1 = (char *)CRYPTO_malloc(iVar4,"../crypto/ui/ui_lib.c",0x178);
      if (pcVar1 == (char *)0x0) goto LAB_00582c30;
      OPENSSL_strlcpy(pcVar1,&local_37,lVar5);
      OPENSSL_strlcat(pcVar1,object_desc,lVar5);
    }
    else {
      sVar3 = strlen(object_name);
      iVar4 = (int)sVar2 + 0xd + (int)sVar3;
      lVar5 = (long)iVar4;
      pcVar1 = (char *)CRYPTO_malloc(iVar4,"../crypto/ui/ui_lib.c",0x178);
      if (pcVar1 == (char *)0x0) {
LAB_00582c30:
        ERR_new();
        ERR_set_debug("../crypto/ui/ui_lib.c",0x179,"UI_construct_prompt");
        ERR_set_error(0x28,0xc0100,0);
        goto LAB_00582c5c;
      }
      OPENSSL_strlcpy(pcVar1,&local_37,lVar5);
      OPENSSL_strlcat(pcVar1,object_desc,lVar5);
      OPENSSL_strlcat(pcVar1,&local_3d,lVar5);
      OPENSSL_strlcat(pcVar1,object_name,lVar5);
    }
    OPENSSL_strlcat(pcVar1,&local_3f,lVar5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar1;
  }
LAB_00582c64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

