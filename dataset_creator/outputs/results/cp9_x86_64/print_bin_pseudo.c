
bool print_bin(BIO *param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  void *data;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_d4;
  undefined1 local_c8;
  undefined1 local_c7 [135];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    bVar1 = true;
    goto LAB_004eb2b2;
  }
  if (param_5 < 1) {
    local_d4 = 0;
LAB_004eb1d5:
    iVar2 = BIO_printf(param_1,"%s",param_2);
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        if (lVar4 == param_4) {
          iVar2 = BIO_write(param_1,&DAT_0081a1ca,1);
          bVar1 = 0 < iVar2;
          goto LAB_004eb2b2;
        }
        if ((ulong)(lVar4 * -0x1111111111111111) < 0x1111111111111112) {
          local_c8 = 10;
          __memset_chk(local_c7,0x20,(long)(local_d4 + 4),0x84);
          iVar2 = BIO_write(param_1,&local_c8,local_d4 + 5);
          if (iVar2 < 1) break;
        }
        lVar4 = lVar4 + 1;
        pcVar3 = "";
        if (lVar4 != param_4) {
          pcVar3 = ":";
        }
        iVar2 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_3 + -1 + lVar4),pcVar3);
      } while (0 < iVar2);
    }
  }
  else {
    local_d4 = 0x80;
    if (param_5 < 0x81) {
      local_d4 = param_5;
    }
    data = (void *)__memset_chk(&local_c8,0x20,(long)local_d4,0x85);
    iVar2 = BIO_write(param_1,data,local_d4);
    if (0 < iVar2) goto LAB_004eb1d5;
  }
  bVar1 = false;
LAB_004eb2b2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

